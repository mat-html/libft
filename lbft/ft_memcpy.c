#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char source[] = "something to be copied";
	char dest[15];

	ft_memcpy(dest, source, sizeof(char) * 14);
	printf("dest: %s", dest);
	return(0);
}*/
