#include <unistd.h>

void	print_numbers()
{
	int nInicial = 9;
	while (nInicial >= 0)
	{
		char c = nInicial + '0';
		write(1, &c, 1);
		nInicial--;
	}
	write(1, "\n", 1);
}

int main(void)
{
	print_numbers();
}