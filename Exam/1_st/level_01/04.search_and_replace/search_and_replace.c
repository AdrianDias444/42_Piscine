#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}


int main(int argc, char **argv)
{
	int argv2 = ft_strlen(argv[2]);
	int argv3 = ft_strlen(argv[3]);

	if(argc == 4 && argv2 == 1 && argv3 == 1)
	{
		char *str = argv[1];

		int i = 0;
		while(str[i] != '\0')
		{
			if (str[i] == argv[2][0])
				str[i] = argv[3][0];

			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);	
}