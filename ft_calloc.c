/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:06:36 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 12:07:02 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (n == 0 || size == 0)
		ptr = malloc(1);
	total_size = n * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}
/*
int main()
{
	unsigned int player = 0;
	unsigned int size = 0;
	
	int *score = ft_calloc(player, size);
	for (unsigned int i = 0; i < player; i++)
	{
		printf("Player: %d\n", score[i]);
	}
	free(score);
}*/
