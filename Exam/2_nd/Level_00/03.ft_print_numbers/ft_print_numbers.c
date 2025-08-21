#include <unistd.h>

void ft_print_numbers (void)
{
	int numero = 0;
	while (numero <= 9)
	{
		char nb = numero + '0';
		write(1, &nb, 1);
		numero++;
	}
}

int main(void)
{
	ft_print_numbers();
}