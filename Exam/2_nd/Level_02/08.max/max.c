#include <stdio.h>

int max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int numero = tab[i];
	while (i < len)
	{
		if (tab [i] > numero)
			numero = tab[i];
		i++;
	}
	return (numero);
}



int main(void)
{
	unsigned int len = 8;
	int tab[8] = {1,211,3,21,5,6,5,800};
	printf("%d", max(tab, len));
}