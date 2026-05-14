/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:44:08 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/14 19:29:37 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	int		count;
	char	**arr;
	int		len;

	len = ft_strlen(s);
	count = 0;
	ft_count_words(s, c, &count, len);
	arr = malloc(sizeof(char *) * count);
	
	while (i < len)
	{
		while (i < len)
		{
			if (s[i] == c)
				break;
		}
	}
	return (arr);	
}

void	ft_count_words(char const *s, char c, int *count, int len)
{
	int	i;
	int	old_i;

	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (s[i] != c)
					break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if(s[i] == c)
					break;
			i++;
		}
		if (i > old_i) *count += 1;
	}
}
