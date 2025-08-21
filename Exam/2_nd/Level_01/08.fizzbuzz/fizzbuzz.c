#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(void)
{
	int numero = 1;

	while (numero <= 100)
	{
		if (numero % 3 == 0 && numero % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (numero % 3 == 0)
			write(1, "fizz", 4);
		else if (numero % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			if (numero > 9)
				ft_putchar(numero / 10 + '0');
			ft_putchar(numero % 10 + '0');
		}
		numero++;
		ft_putchar('\n');
		
	}
	
}