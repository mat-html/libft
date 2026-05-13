/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:31:24 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 12:51:45 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (ft_strlen(s) >= start && i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	return (ptr);
}
/*
int main()
{
	const char *s = "123456789";
	unsigned int start = 3;

	printf("%s", ft_substr(s, start, 4));
					return(0);
}*/
