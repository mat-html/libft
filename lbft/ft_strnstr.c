#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		l = 0;
		while (big[i + l] == little[l]
			&& i + l < len && big[i + l] && little[l])
		{
			l++;
		}
		if (little[l] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char big[] = "something will find THIS word";
	const char little[] = "diff";
	size_t i = 40;

	printf("%s", ft_strnstr(big, little, i));
}*/
