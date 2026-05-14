/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:44:39 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/14 18:44:00 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
		int	i;
		int	count;

		i = 0;
		count = 0;
		if (s[i])
		{	
			i++;
			count++;
		}
		while (s[i] != '\0')
		{
			if (s[i] == c)
				count++;
			i++;
		}
		return (count);
}
/*
char	*fill_word(const char *start, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = start[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
*/
void	ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	result = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
	
	}
	result[j] = NULL;
	ft_free(result, count_word(s, c));
	return (result);
}

int main()
{
	char *s = "some some some some some";
	char c = ' ';
	char **result;
	int	i = 0;
	int j = 0;

	result = ft_split(s, c);
	while(result[i])
	{
		printf("%s", result[i]);
		i++;
	}
	return (0);
}
