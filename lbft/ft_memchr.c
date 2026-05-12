#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		unsigned_c;

	ptr = s;
	unsigned_c = (unsigned char) c;
	while (n > 0)
	{
		if (*ptr == unsigned_c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
/*
#include <string.h>
int main()
{
	const void *s = "sometahing";
	int c = 0;

	printf("%p\n", ft_memchr(s, c, 20));
//	printf("%p", memchr(s, c, 11));
}*/
