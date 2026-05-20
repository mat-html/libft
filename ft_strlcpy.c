/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:45:59 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 11:46:37 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (dsize == 0)
		return (0);
	while (i < dsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int main ()
{
	char dest[100];
	const char src[] = "something to be coppied to dest";
	size_t len = ft_strlcpy(dest, src, 20);
	printf("dest: %s", dest);
	printf("size: %ld", len);
	return (0);
}*/
