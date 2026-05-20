/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:55:51 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/17 17:12:02 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_head;

	new_head = malloc(sizeof(t_list));
	if (!new_head)
		return (NULL);
	new_head->content = content;
	new_head->next = NULL;
	return (new_head);
}
/*
int main()
{
	t_list *head;
	char *str = "somethign";

	head = ft_lstnew(str);
	printf("%s\n", (char *)head->content);
	printf("%p\n", head);
	printf("%p\n", head->next);
	return 0;
}*/
