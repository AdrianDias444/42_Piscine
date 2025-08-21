#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

	if (argc == 2)
	{
		int i = 0;
		int soma = 0;
		int numero = argv[1][0] - '0';

		while (numero > 1)
		{
			while (i * i < numero)
			{
				if (numero % i == 0)
				{
					numero = numero - 1;
					i = 0;
					exit;
				}
				i++;
				if (i * i >= numero)
				{
					soma = soma + numero;
					i = 0;
					numero = numero - 1;
					exit;
				}
				
			}

		}
	}
	write(1, "\n", 1);
}