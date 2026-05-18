/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:45:49 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/18 12:00:17 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	del_node(void *content)
{
	printf("2before free delnode\n");
	if(content != NULL)
		free(content);
	printf("affter free del_node#\n");
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
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

	head = ft_lstnew(ft_strdup(str));
	second = ft_lstnew(ft_strdup(str3));
	new = ft_lstnew(ft_strdup(str2));
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
	ft_lstdelone(head, del_node);
	printf("head->next %p\n", head->next);
    printf("new->next %p\n", new->next);
    printf("second->next %p\n", second->next);

	return (0);
}*/
