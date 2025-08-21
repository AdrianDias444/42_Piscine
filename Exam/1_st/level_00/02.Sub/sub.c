// Escreva uma funcao, prototipada desta forma:
// - int	sub(int *ptr, int number);

// A funcao deve sutrair o inteiro definido no parametro ao
// inteiro apontado pelo ponteiro

#include <stdio.h>

int	sub(int *ptr, int number)
{
	*ptr = *ptr - number;
	return(*ptr);
}

int main(void)
{
	int ptr = 14;
	printf("%d", sub(&ptr, 2));
}
