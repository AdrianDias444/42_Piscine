#include <unistd.h>

int ft_strlen(char *string)
{
	int i = 0;
	while (string[i])
		i++;
	return (i);
}


int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *str1 = argv[1];
		char *str2 = argv[2];
		int i = 0;
		int j = 0;
		if (str1[i] == '\0')
		{
			write(1, "1", 1);
			return(0);
		}
		
		while (str1[i] && str2[j])
		{
			if (str1[i] == str2[j])
				i++;
			if (i == ft_strlen(str1))
				write(1, "1", 1);
			j++;
		}
		if (i != ft_strlen(str1))
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}