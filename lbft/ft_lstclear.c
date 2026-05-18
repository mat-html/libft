/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 09:48:34 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/18 10:53:32 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	del(void *content)
{
	if(content != NULL)
		content = NULL;
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
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
	ft_lstclear(&second, del);
	print_list(first);
	return(0);
}*/
