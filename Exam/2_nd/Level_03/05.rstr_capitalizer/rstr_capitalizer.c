#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}


int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		char *str = argv[1];
		int i = 0;

		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			i++;
		}
		i = i - 1;
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		
		while (i > 1)
		{
			while (str[i] != ' ' || str[i] != '\t')
			{
				if (i != ft_strlen(str))
				{
					if (str[i] && (str[i + 1] == ' ' || str[i + 1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
						str[i] = str[i] - 32;
				}
				i--;
			}
			while (str[i] == ' ' || str[i] == '\t')
			i--;
		}
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
}