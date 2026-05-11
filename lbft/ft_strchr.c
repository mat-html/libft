#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <string.h>
int main()
{
	const char s[] = "something";
	int c = 0;

	printf("%s", strchr(s, c));
}*/
