#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (n == 0 || size == 0)
		return (NULL);
	total_size = n * size;
	ptr = malloc(total_size);
	if(ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}	
	return (ptr);
}
/*
int main()
{
	unsigned int player = 10;
	unsigned int size = 4;
	
	int *score = ft_calloc(player, size);
	for (unsigned int i = 0; i < player; i++)
	{
		printf("Player: %d\n", score[i]);
	}
	free(score);
}*/
