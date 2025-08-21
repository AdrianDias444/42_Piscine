#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = ft_strlen(argv[1]) - 1;
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		while (str[i - 1] != ' ' && str[i - 1] != '\t')
			i--;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	
}