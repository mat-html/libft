/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:31:24 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 15:07:26 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			real_length;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		real_length = ft_strlen(s) - start;
	else
		real_length = len;
	ptr = ft_calloc((real_length + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, start + s, real_length + 1);
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
