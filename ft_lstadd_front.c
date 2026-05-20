/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:13:04 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/20 12:14:37 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int main ()
{
	char *str = "something first";
	char *str2 = "second";
	t_list *head;
	t_list *new;

	head = malloc(sizeof(t_list));
	head = NULL;
	head = ft_lstnew(ft_strdup(str));
	new = ft_lstnew(ft_strdup(str2));

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
