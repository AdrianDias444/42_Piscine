#include <unistd.h>

int str_len(char *str)
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
		int i =  str_len(argv[1]) - 1;
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}