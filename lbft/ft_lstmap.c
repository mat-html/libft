/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:02:11 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/18 12:38:06 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_lst(t_list *lst)
{
	while (lst != NULL)
	{
			printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void del(void *content)
{
	if (content)
		free(content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *new_list;

	if (!lst || !del || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{	
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}

int main()
{
	t_list *test;
	t_list *test1;
	t_list *test2;
	t_list *test3;
	t_list *test4;

	test = ft_lstnew(ft_strdup("3"));
	test1 = ft_lstnew(ft_strdup("2"));
	test2 = ft_lstnew(ft_strdup("1"));
	test3 = ft_lstnew(ft_strdup("1"));
	test4 = ft_lstnew(ft_strdup("0"));

	test->next = test1;
	test1->next = test2;
	test2->next = test3;
	test3->next = test4;
	test4->next = NULL;

	ft_lstmap(test, (char *)ft_strdup, del);
	print_lst(test);
}
