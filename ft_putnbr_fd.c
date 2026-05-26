/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:17:10 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 16:07:44 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_write_str(char *str, int fd)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
}

static void	ft_swap(char *str, int fd)
{
	size_t	k;
	size_t	i;
	char	temp;

	i = 0;
	k = 0;
	while (str[i] != '\0')
		i++;
	while (i > k)
	{
		temp = str[k];
		str[k] = str[i - 1];
		str[i - 1] = temp;
		i--;
		k++;
	}
	ft_write_str(str, fd);
}

static int	int_min_max(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	else
	{
		write(fd, "2147483647", 10);
		return (0);
	}
	return (0);
}

static void	ft_check_nb(int nb, int fd)
{
	size_t	i;
	char	str[15];

	i = 0;
	if (nb < 0)
	{
		nb *= (-1);
		write(fd, "-", 1);
	}
	while (nb >= 10)
	{
		str[i++] = '0' + nb % 10;
		nb /= 10;
	}
	if (nb < 10 && nb > 0)
	{
		str[i++] = '0' + nb;
	}
	else
	{
		str[i++] = '0';
	}
	str[i] = '\0';
	ft_swap(str, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648 || n == 2147483647)
	{
		int_min_max(n, fd);
	}
	else
	{
		ft_check_nb(n, fd);
	}
}
/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
}
*/
