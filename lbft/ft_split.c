/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 10:27:09 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/16 12:36:00 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		count;
	int		inside_word;
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

static void	ft_free(char **arr, int i)
{
	int	j;

	j = 0;
	while (j < i)
		free(arr[j++]);
	free(arr);
}

static int	ft_malloc(char **arr, int i, size_t buffer)
{
	int	j;

	j = 0;
	arr[i] = malloc(buffer * sizeof(char));
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
	int		i;
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
		if (ft_malloc(arr, i, len + 1))
			return (NULL);
		ft_strlcpy(arr[i], s + (j - len), len + 1);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	int		count;
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
int main()
{
	char s[] = "some thing will be done i hope";
	char c = 'e';
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
