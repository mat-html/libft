/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copilot <copilot@student.example.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 00:00:00 by copilot           #+#    #+#             */
/*   Updated: 2026/05/18 00:00:00 by copilot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	test_putchar_fd(void)
{
	printf("\n--- ft_putchar_fd ---\n");
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
}

static void	test_putstr_fd(void)
{
	printf("\n--- ft_putstr_fd ---\n");
	ft_putstr_fd("hello ft_putstr_fd\n", 1);
}

static void	test_putendl_fd(void)
{
	printf("\n--- ft_putendl_fd ---\n");
	ft_putendl_fd("hello ft_putendl_fd", 1);
}

static void	test_putnbr_fd(void)
{
	printf("\n--- ft_putnbr_fd ---\n");
	ft_putnbr_fd(12345, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-12345, 1);
	ft_putchar_fd('\n', 1);
}

static void	test_is_funcs(void)
{
	printf("\n--- ft_is* ---\n");
	printf("isalpha A=%d, 1=%d\n", ft_isalpha('A'), ft_isalpha('1'));
	printf("isdigit 4=%d, a=%d\n", ft_isdigit('4'), ft_isdigit('a'));
	printf("isalnum 4=%d, a=%d, ?=%d\n", ft_isalnum('4'), ft_isalnum('a'), ft_isalnum('?'));
	printf("isascii 127=%d, 128=%d\n", ft_isascii(127), ft_isascii(128));
	printf("isprint 32=%d, 31=%d\n", ft_isprint(32), ft_isprint(31));
}

static void	test_str_funcs(void)
{
	char	*dup;
	char	*substr;
	char	*joined;
	char	*trimmed;
	char	**split;

	printf("\n--- ft_strlen/ft_strchr/ft_strrchr/ft_strncmp/ft_strdup ---\n");
	printf("strlen Hello = %zu\n", ft_strlen("Hello"));
	printf("strchr: %s\n", ft_strchr("Hello", 'l'));
	printf("strrchr: %s\n", ft_strrchr("Hello", 'l'));
	printf("strncmp Hello/Hel 3 = %d\n", ft_strncmp("Hello", "Hel", 3));
	dup = ft_strdup("duplicate");
	printf("strdup: %s\n", dup);
	free(dup);

	printf("\n--- ft_substr/ft_strjoin/ft_strtrim/ft_split/ft_itoa ---\n");
	substr = ft_substr("Hello, world", 7, 5);
	printf("substr: %s\n", substr);
	free(substr);
	joined = ft_strjoin("Hello", " world");
	printf("strjoin: %s\n", joined);
	free(joined);
	trimmed = ft_strtrim("   abc  ", " ");
	printf("strtrim: %s\n", trimmed);
	free(trimmed);
	split = ft_split("one:two:three", ':');
	for (int i = 0; split[i]; i++)
	{
		printf("split[%d] = %s\n", i, split[i]);
		free(split[i]);
	}
	free(split);
	printf("itoa 1234: %s\n", ft_itoa(1234));
	free(ft_itoa(-42));
}

static char	to_upper_char(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

static void	to_upper_striteri(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void	test_strmapi_striteri(void)
{
	char	s[8] = "abcdef\0";
	char	*smapped;

	printf("\n--- ft_strmapi/ft_striteri ---\n");
	smapped = ft_strmapi("abcdef", to_upper_char);
	printf("strmapi: %s\n", smapped);
	free(smapped);
	ft_striteri(s, to_upper_striteri);
	printf("striteri: %s\n", s);
}

static void	test_mem_funcs(void)
{
	char	buffer[17] = "abcdefghijklmnop";
	printf("\n--- ft_memset/ft_bzero/ft_memcpy/ft_memmove/ft_memchr/ft_memcmp ---\n");
	ft_memset(buffer, 'x', 5);
	printf("memset: %.5s\n", buffer);
	ft_bzero(buffer + 5, 3);
	printf("bzero: %.8s\n", buffer);
	ft_memcpy(buffer, "12345", 5);
	printf("memcpy: %.5s\n", buffer);
	ft_memmove(buffer + 2, buffer, 5);
	printf("memmove: %.7s\n", buffer);
	printf("memchr: %p\n", ft_memchr(buffer, '3', 7));
	printf("memcmp: %d\n", ft_memcmp(buffer, "12", 2));
}

static void	test_calloc_atoi(void)
{
	char	*ptr;

	printf("\n--- ft_calloc/ft_atoi ---\n");
	ptr = ft_calloc(5, 1);
	if (ptr)
	{
		printf("calloc ok\n");
		free(ptr);
	}
	printf("atoi 42 = %d\n", ft_atoi("42"));
	printf("atoi -13 = %d\n", ft_atoi("-13"));
}

static void	test_lst_funcs(void)
{
	t_list	*head;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	printf("\n--- linked list ---\n");
	head = ft_lstnew(ft_strdup("node1"));
	node2 = ft_lstnew(ft_strdup("node2"));
	node3 = ft_lstnew(ft_strdup("node3"));
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	printf("lstsize = %d\n", ft_lstsize(head));
	last = ft_lstlast(head);
	printf("last = %s\n", (char *)last->content);
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("node4")));
	printf("after add_back size = %d\n", ft_lstsize(head));
	while (head)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}
	ft_lstdelone(node2, free);
	ft_lstclear(&head, free);
	printf("list cleared, head=%p\n", (void *)head);
}

static void	test_lstmap(void)
{
	t_list	*head;
	t_list	*map;

	printf("\n--- ft_lstmap ---\n");
	head = ft_lstnew(ft_strdup("a"));
	head->next = ft_lstnew(ft_strdup("b"));
	map = ft_lstmap(head, (void *(*)(void *))ft_strdup, free);
	while (map)
	{
		printf("%s\n", (char *)map->content);
		map = map->next;
	}
	ft_lstclear(&head, free);
	ft_lstclear(&map, free);
}

int main(void)
{
	test_putchar_fd();
	test_putstr_fd();
	test_putendl_fd();
	test_putnbr_fd();
	test_is_funcs();
	test_str_funcs();
	test_strmapi_striteri();
	test_mem_funcs();
	test_calloc_atoi();
	test_lst_funcs();
	test_lstmap();
	return (0);
}
