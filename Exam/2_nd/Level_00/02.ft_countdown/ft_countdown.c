#include <unistd.h>

int main()
{
	int numero = 9;
	while (numero >= 0)
	{
		char nb = numero + '0';
		write(1, &nb, 1);
		numero--;
	}
	write(1, "\n", 1);
}