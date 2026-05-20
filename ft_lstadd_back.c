/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:32:58 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/19 14:56:32 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	ptr = ft_lstlast(*lst);
	if (!ptr)
	{
		*lst = new;
		return ;
	}
	ptr->next = new;
}
/*
int main()
{
	char *str = "something first";
	char *str2 = "second";
	char *str3 = "third";
	t_list *head;
	t_list *new;
	t_list *second;

	head = ft_lstnew(str);
	second = ft_lstnew(str3);
	new = ft_lstnew(str2);
	head->next = second;

	printf("head: %s\n", (char *)head->content);
    printf("new: %s\n", (char *)new->content);
    printf("second->next%p\n", second->next);
	printf("second: %s\n", (char *)second->content);
    printf("head->next: %p\n", head->next);
    printf("new->next%p\n", new->next);
    printf("head %p\n", head);
    printf("new %p\n", new);
    printf("second %p\n", second);
    printf("\n\n");
	ft_lstadd_back(&head, new);
	printf("head->next %p\n", head->next);
    printf("new->next %p\n", new->next);
    printf("second->next %p\n", second->next);

	return (0);
}*/
