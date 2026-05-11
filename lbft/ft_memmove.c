#include "libft.h"

void	*ft_memmove(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char *d;
	//const unsigned char *s;
	unsigned char tmp[n];

	i = 0;
	d = (unsigned char *)dest;
	ft_memcpy(tmp, src, n);
	while(i < n)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	unsigned char dest[20];
	const unsigned char src[] = "somethingToBeMoved";
	
	ft_memmove(dest, src, sizeof(char) * 15);
	printf("moved: %s", dest);
	return (0);
}*/
