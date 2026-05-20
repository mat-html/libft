/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:04:04 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 12:04:05 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		i--;
		s--;
	}
	return (NULL);
}
/*
int main ()
{
	const char s[] = "something to be displayed";
	int c = 0;

	printf("%s", ft_strrchr(s, c));
}*/
