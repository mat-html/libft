/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:59:15 by jomatic           #+#    #+#             */
/*   Updated: 2026/04/24 14:51:22 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		i++;
		*(char *)s++ = c;
	}
	return (s);
}
/*
int main ()
{
	char something[20] = "123456789";
	unsigned char c = 'a';
	ft_memset(something, c, sizeof(char) * 7);
	for (size_t i = 0; i < sizeof(something); i++)
			printf("%c", something[i]);
	return 0;
}*/
