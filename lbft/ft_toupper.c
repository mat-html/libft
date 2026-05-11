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
