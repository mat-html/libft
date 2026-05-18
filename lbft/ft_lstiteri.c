/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:54:04 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/18 11:58:54 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void    to_upper(void *content)
{
    char    *str;
    int     i;

    str = (char *)content;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
}
*/
void	ft_lstiteri(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
/*
void	print_lst(t_list *lst)
{
	while (lst != NULL)
	{
			printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int main()
{
	t_list *test;
	t_list *test1;
	t_list *test2;
	t_list *test3;
	t_list *test4;

	test = ft_lstnew(ft_strdup("test"));
	test1 = ft_lstnew(ft_strdup("test1"));
	test2 = ft_lstnew(ft_strdup("test2"));
	test3 = ft_lstnew(ft_strdup("test3"));
	test4 = ft_lstnew(ft_strdup("test4"));
	
	test->next = test1;
	test1->next = test2;
	test2->next = test3;
	test3->next = test4;
	test4->next = NULL;

	ft_lstiteri(test2, to_upper);
_	print_lst(test);
}*/
