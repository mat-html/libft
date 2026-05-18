/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:22:21 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/17 18:32:36 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *ptr;

	if (!lst->next)
		return (lst);
	ptr = lst;
	while(ptr->next)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
/*
int main()
{
	t_list *head;
	t_list *first;
	t_list *second;
	t_list *third;

	head = ft_lstnew("last");
	first = ft_lstnew("something");
	second = ft_lstnew("something");
	third = ft_lstnew("something");
	ft_lstadd_front(&head, third);
	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, first);
	printf("%s", (char *)ft_lstlast(first)->content);
	return(0);
}*/
