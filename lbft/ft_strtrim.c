/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:09:32 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 14:43:07 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{

	int	i;
	int	j;
	int	start;
	char *string;

	i = 0;
	j = 0;
	start = 0;
	string = malloc(ft_strlen(s1) * sizeof(char) + 1);
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
			{
			  start++;
			}
			i++;
			j++;
		}
		j = 0;
	}
	ft_strlcpy(string, s1[start], ft_strlen(s1) + 1);
	return (string);
}

int main()
{
	char *s1 = "something will be deleted from the string something";
	char *set = "something";

	printf("%s", ft_strtrim(s1, set));
					return (0);
}
