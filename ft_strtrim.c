/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:09:32 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/14 13:46:47 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_start(const char *s1, const char *set)
{
	unsigned int	i;
	int				j;
	int				start;

	i = 0;
	j = 0;
	start = 0;
	while (set[j] != '\0')
	{
		if (set[j] == s1[i])
		{
			start++;
			i++;
			j = -1;
		}
		j++;
	}
	return (start);
}

static int	ft_find_end(const char *s1, const char *set)
{
	unsigned int	i;
	unsigned int	j;
	int				end;

	i = ft_strlen(s1);
	end = 0;
	j = 0;
	while (i > 0 && j <= ft_strlen(set))
	{
		if (set[j] == s1[i])
		{
			end++;
			i--;
			j = -1;
		}
		j++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	end = 0;
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	return (ft_substr(s1, start, ft_strlen(s1) - (start + end - 1)));
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "//-++//somting will delete somth//+-";
	char *set = "-+/";

	printf("%s", ft_strtrim(s1, set));
					return (0);
}*/
