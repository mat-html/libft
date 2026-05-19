/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:52:29 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/19 15:23:31 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*ptr;
	unsigned int	j;

	i = 0;
	j = 0;
	ptr = ft_calloc((ft_strlen(s1) + ft_strlen(s2)), sizeof(char));
	while (i < (ft_strlen(s1)+ft_strlen(s2)))
	{
		while (i < (ft_strlen(s1) + ft_strlen(s2)))
		{
			if (i < ft_strlen(s1))
			{
				ptr[i] = s1[i];
				i++;
				break ;
			}
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "pre";
	char *s2 = "fix";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/
