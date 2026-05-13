/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:06:10 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 12:06:11 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *ptr)
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
	int	result;

	sign = 0;
	i = ft_isspace(ptr);
	result = 0;
	while (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			sign++;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		result = result * 10 + (ptr[i] - '0');
		i++;
	}
	if (sign % 2 == 1)
	{
		sign = -1;
		return (result * sign);
	}
	return (result);
}
/*
int main(){
	const char str[205] = "      \t \n -+-+2314";

printf("%d", ft_atoi(str));
}*/
