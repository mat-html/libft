/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:05:48 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 14:01:49 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		l = 0;
		while (big[i + l] == little[l]
			&& i + l < len && big[i + l] && little[l])
		{
			l++;
		}
		if (little[l] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char * empty = (char*)"";
	//const char big[] = "something will find THIS word";
	//const char little[] = "diff";
	ssize_t i = -1;

	printf("%s", ft_strnstr(empty, "", i));
	//printf("%d", strnstr(empty, "", i));	
}*/
