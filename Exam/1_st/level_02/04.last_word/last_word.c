#include<unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}


int main(int argc, char **argv)
{
	if(argc == 2)
	{
		char *str = argv[1];
		int j = ft_strlen(argv[1]);
		int i = j - 1;
		while (str[i] == ' ')
		{
			i--;
			if (i == 0)
			{
				write(1, "\n", 1);
				return (0);
			}
		}
		while (str[i - 1] != ' ')
			i--;
		while (str[i] != '\0' && str[i] != ' ')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}