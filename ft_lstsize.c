/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:53:02 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 15:08:41 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t		count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return ((int)count);
}
/*
int main()
{
	t_list *head;
	t_list *first;
	t_list *second;
	t_list *third;

	head = ft_lstnew("something");
	first = ft_lstnew("something");
	second = ft_lstnew("something");
	third = ft_lstnew("something");
	ft_lstadd_front(&head, third);
	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, first);
	printf("%d", ft_lstsize(first));
	return(0);
}*/
