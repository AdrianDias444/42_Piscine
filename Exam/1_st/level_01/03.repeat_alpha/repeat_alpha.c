#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc > 1)
	{ 
		char *str = argv[1];
		int i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				int valor = 123 - str[i];
				while (valor <= 26)
				{
					write(1, &str[i], 1);
					valor++;
				}
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				int valor = 91 - str[i];
				while (valor <= 26)
				{
					write(1, &str[i], 1);
					valor++;
				}
				
			}		
			i++;
		}
	}
	write(1, "\n", 1);
}