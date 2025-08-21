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
		int i = 0;
		int j = ft_strlen(str);

		while (str[i] == ' ' || str[i] == '\t')
			i++;

		while (str[j] == ' ' || str[j] == '\t')
			j--;
		

		while (i < j)
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				while (str[i] == ' ' || str[i] == '\t')
					i++;
				write(1, "   ", 3);
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}