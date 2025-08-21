#include <unistd.h>

int	main(void)
{
	char letra = 'z';
	int diff;

	while (letra >= 'A')
	{
		if (letra >= 'a' && letra <= 'z')
		{
			write(1, &letra, 1);
			diff = 33;
		}
		if(letra >= 'A' && letra <= 'Z')
		{
			write(1, &letra, 1);
			diff = -31;
		}
		letra = letra - diff;
	}
	write(1, "\n", 1);
}