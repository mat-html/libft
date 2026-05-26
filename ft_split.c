/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 10:27:09 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 16:08:05 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	inside_word;
	size_t	j;

	j = 0;
	count = 0;
	while (s[j])
	{
		inside_word = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
		{
			if (inside_word == 0)
			{
				count++;
				inside_word = 1;
			}
			j++;
		}
	}
	return (count);
}

static void	ft_free(char **arr, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
		free(arr[j++]);
	free(arr);
}

static int	ft_malloc(char **arr, size_t i, size_t buffer)
{
	arr[i] = ft_calloc(buffer, sizeof(char));
	if (arr[i] == NULL)
	{
		ft_free(arr, i);
		return (1);
	}
	return (0);
}

static char	**fill_word(char **arr, const char *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		len = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
		{
			len++;
			j++;
		}
		if (len > 0)
		{
			if (ft_malloc(arr, i, len + 1))
				return (NULL);
			ft_strlcpy(arr[i], s + (j - len), len + 1);
			i++;
		}
	}
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	size_t	count;
	char	**arr;

	count = count_words(s, c);
	arr = ft_calloc(count + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	if (!fill_word(arr, s, c))
		return (NULL);
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "  tripouille  42  ";
	char c = ' ';
	char **arr;
	int	i;

	i = 0;
	arr = ft_split(s, c);

	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}*/
