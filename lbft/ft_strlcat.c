#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (dsize <= dest_len)
		return (src_len + dsize);
	while (src[i] && dest_len + i < dsize - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + src_len] = '\0';
	return (dest_len + src_len);
}
/*
#include <string.h>
int main()
{
	char dest[50] = "something wil be added after,";
	const char src[50] = "something is added after to be too much";

	printf("%ld", ft_strlcat(dest, src, 20));
}*/
