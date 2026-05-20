/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:53:02 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/17 18:12:42 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		count;

	count = 0;
	if (!lst)
		return (count);
	count = 1;
	if (!lst->next)
		return (count);
	ptr = lst->next;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
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
