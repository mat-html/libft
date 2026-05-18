/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:13:04 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/17 17:52:07 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main ()
{
	char *str = "something first";
	char *str2 = "second";
	t_list *head;
	t_list *new;

	head = ft_lstnew(str);
	new = ft_lstnew(str2);

	printf("%s\n", (char *)head->content);
    printf("%s\n", (char *)new->content);
    printf("%p\n", head->next);
    printf("%p\n", new->next);
    printf("%p\n", head);
    printf("%p\n", new);
    printf("\n\n");
	ft_lstadd_front(&head, new);
	printf("%p\n", head->next);
    printf("%p\n", new->next);
	return (0);
}*/
