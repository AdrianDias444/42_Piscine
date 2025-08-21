
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nbInicial = 0;

	while (nbInicial <= 9)
	{
		char c = nbInicial + '0';
		write(1, &c, 1);
		nbInicial++;
	}
}

int main(void)
{
	ft_print_numbers();
}