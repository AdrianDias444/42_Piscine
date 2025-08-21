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

		if (str[i] == ' ' || str[i] == '\t')
			i = 1;
		while (str[i])
		{
			while ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t'))
				i++;
			if (!(str[i + 1] == '\0' && str[i] == ' '))
				write(1, &str[i], 1);
			i++;	
		}
		
	}
	write(1, "\n", 1);
}