#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;

		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'm')
				str[i] = str[i] + 13;
			else if (str[i] > 'm' && str[i] <= 'z')
				str[i] = (str[i] + 13) - 'z' +  96;
			if (str[i] >= 'A' && str[i] <= 'M')
				str[i] = str[i] + 13;
			else if (str[i] > 'M' && str[i] <= 'Z')
				str[i] = (str[i] + 13) - 'z' +  64;
			write(1, &str[i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
}

