#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
/*
int main ()
{
	int c = 70;

	printf("%d", ft_tolower(c));
}*/
