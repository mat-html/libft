/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:41:54 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/26 14:02:26 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int    main(void)
{
    //char    real[100] = "ABCDEFGHIJ";
    //char    fake[100] = "ABCDEFGHIJ";
  // char    help[100] = "ABCDEFGHIJ";
   char s0[] = { 0,  0,  0,  0,  0,  0, 0};
   char s[] = {65, 66, 67, 68, 69, 0, 45};
   // int len = 5;

  //  printf("string: %s\n\n", s);
    //memmove(s0 , s, 7);
    //printf("memmove: %s\n", s0);
   //s = {65, 66, 67, 68, 69, 0, 45};
    
	ft_memmove(s0, s, 7);
    printf("ft_memmove: %s\n", s0);

    ft_memcpy(fake + 1, fake, len);
	  printf("ft_memcpy: %s\n\n", fake);

	char Result_OG[] = {67, 68, 67, 68, 69, 70, 45};
	char Result_FT[] = {67, 68, 67, 68, 69, 70, 45};
	char Result_FK[] = {67, 68, 67, 68, 69, 70, 45};
	len = 5;
	
	printf("string: %s\n\n", Result_OG);
	memmove(Result_OG + 1, Result_OG, len);
	printf("memmove: %s\n", Result_OG);

	ft_memmove(Result_FT + 1, Result_FT, len);
	printf("ft_memmove: %s\n", Result_FT);

	ft_memcpy(Result_FK + 1, Result_FK, len);
	printf("ft_memcpy: %s\n\n", Result_FK);
}*/

/*
#include <stdio.h>
int main()
{
	unsigned char dest[20];
	const unsigned char *src = "somethingToBeMoved";
	
	ft_memmove(&src[2], src, sizeof(char) * 10);
	printf("moved: %s", dest);
	return (0);
}*/
