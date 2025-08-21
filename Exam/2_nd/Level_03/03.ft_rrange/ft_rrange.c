#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int range = end - start;
	int *array;

	if (range == 0)
	{
		array = malloc(sizeof(int) * 1);
		array[0] = end;
		return(array);
	}
	if (range < 0)
		range = range * -1;
	
	
	array = malloc(sizeof(int) * (range + 1));
	int i = 0;


	while (end != start)
	{
		array[i] = end;
		i++;
		if (end > start)
			end--;
		else
			end++;
	}
	array[i] = end;
	return(array);
}

int main(void)
{
	ft_rrange(1, 3);
}