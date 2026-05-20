/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:15:33 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/17 14:32:51 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
static void add_index(unsigned int i, char *c)
{
    *c = *c + i;
}

int main(void)
{
    char str[] = "aaaa";

    ft_striteri(str, add_index);

    printf("%s\n", str); // expected: abcd

    return 0;
}*/
