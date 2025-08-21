#include <unistd.h>

int ft_strlen(char *str)
{
	int i  = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = ft_strlen(argv[1]) - 1;

		while (i >= 0)
			write(1, &str[i--], 1);
	}
	write(1, "\n", 1);
}