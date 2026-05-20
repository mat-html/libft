/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 12:03:06 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/13 12:03:07 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 123 && c > 96)
		return (c - 32);
	return (c);
}
/*
#include <ctype.h>
int main()
{
	int c = 95;

	printf("%d", toupper(c));
}*/
