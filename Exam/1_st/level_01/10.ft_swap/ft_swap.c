#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 3;
	int b = 4;
	ft_swap(&a, &b);
	printf("%d\n%d", a, b);
}