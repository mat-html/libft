/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:58:22 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/14 16:19:56 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//make array of strings
//ft_split return array of strings(double pointer)
//function that free everything
//count how many strings we will have
//NULL terminate array; NULL terminate strings
int	ft_count_char(char const *s, char c)
{
	int	i;
	int num_of_char;

	i = 0;
	num_of_char = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && i != 0)
		{	
			num_of_char++;
		}
		else if (i == 0)
		{
			num_of_char = 1;
		}
		i++;
	}
	return (num_of_char);
}

char *ft_make_string(char const *s,  char c, int start)
{
	char	*str;
	int		len;
	int		i;
	
	i = 0;
	len = 0;
	if (start == 0)
	{
		while (s[len] != c)
		{
			len++;
		}
		str = malloc(len * sizeof(char));
	}
	while (start != 0)
	{
		if (s[i] == c || i == 0)
			start--;
		i++;
	}
	while (s[i] != '\0' && s[i] != c)
		len++;
	str = malloc(len * sizeof(char));
	while (s[i] != '\0' && s[i] != c)
	{
		str[start] = s[i];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		count;

	i = 0;
	count = ft_count_char(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if(!arr)
		return (NULL);
	while (i < count)
	{
		*arr++ = ft_make_string(s, c, i);
		i++;
	}
	return (arr);
}

int main()
{
	char *s = "some some some";
	char c = 's';
	char **arr;
	int i = 0;

	arr = ft_split(s, c);
	while (arr)
	{
		printf("%s", arr[i]);
		i++;
	}
	return (0);
}
