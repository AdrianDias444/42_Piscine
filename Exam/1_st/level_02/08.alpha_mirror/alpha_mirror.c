#include <unistd.h>

int  main(int argc, char **argv)
{
	if(argc == 2)
	{
		char *str = argv[1];
		int i = 0;

		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] <= 'm')
					str[i] = 'z' - (str[i] - 97);
				else if (str[i] >= 'n')
					str[i] =  'a' + ('z' - str[i]);
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] <= 'M')
					str[i] = 'Z' - (str[i] - 65);
				else if (str[i] >= 'N')
					str[i] =  'A' + ('Z' - str[i]);
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}