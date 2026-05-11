/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:53:29 by jomatic           #+#    #+#             */
/*   Updated: 2026/04/24 16:28:32 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	c = (char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/*
#include <strings.h>
#include <stdio.h>
int main()
{
	char str[20] = "Some string to test";
	char my_bzero[20] = "Some string to test";
	size_t n = 15;

	bzero(str, 5);
	ft_bzero(my_bzero, 5);
	for(size_t i = 0; i < n; i++)
	{
		printf("bzero %c\n", str[i]);
		printf("my_bzero: %c\n", my_bzero[i]);
	}
}
*/
