/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:41:54 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 12:23:13 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i++ < n)
			d[i] = s[i];
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	unsigned char dest[20];
	const unsigned char *src = "somethingToBeMoved";
	
	ft_memmove(&src[2], src, sizeof(char) * 10);
	printf("moved: %s", dest);
	return (0);
}*/
