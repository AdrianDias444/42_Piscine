#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		while (str[i] != '\0')
		{
			while ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != '\0')
				i++;
			if (str[i + 1] == '\0')
			{
				write(1, "\n", 1);
				return(0);
			}
			
			while ((str[i + 1] != ' ' && str[i + 1] != '\t') && str[i] != '\0')
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, &str[i], 1);
			write(1, "\n", 1);
			return(0);
		}
	}
	write(1, "\n", 1);
	
}