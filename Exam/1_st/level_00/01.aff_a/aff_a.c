#include <unistd.h>

int	print_a(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == 'a')
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);	
	return(1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return(0);
	}
	
	print_a(argv[1]);
}