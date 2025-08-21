#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}


int main(int argc, char **argv)
{
	if(argc == 3)
	{
		char *str = argv[1];
		char *str2 = argv[2];

		int i = 0;
		int j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str[i])
				i++;
			j++;
			if(i == ft_strlen(argv[1]))
			{
				i = 0;
				while (str[i] != '\0')
				{
					write(1, &str[i], 1);
					i++;
				}
				write(1, "\n", 1);
				return (0);
			}
		}
	}
	write(1, "\n", 1);
}