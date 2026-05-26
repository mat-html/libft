/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:05:18 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 14:31:16 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_char(int n)
{
	size_t		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count++;
		nb = nb * (-1);
	}
	else if (nb == 0)
		count = 1;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t		len;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= (-1);
	}
	len = count_char(n);
	result = ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	while (len > 0)
	{
		result[--len] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
	{
		result[0] = '-';
	}
	return (result);
}
/*
int main()
{
    int n = 217836;

    printf("%s", ft_itoa(n));
}*/
