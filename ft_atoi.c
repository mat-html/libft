/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:06:10 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 14:26:29 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i] == ' '
		|| (ptr[i] >= 9 && ptr [i] <= 13))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *ptr)
{
	int	i;
	int	sign;
	long	result;

	sign = 1;
	i = ft_isspace(ptr);
	result = 0;
	if (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		result = result * 10 + (ptr[i] - '0');
		i++;
	}
	return ((int)result * sign);
}
/*
int main(){
	const char str[205] = "      \t \n -+-+2314";

printf("%d", ft_atoi(str));
}*/
