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
	if (argc == 3)
	{
		char *str1 = argv[1];
		char *str2 = argv[2];
		int i = 0;
		int j = 0;


		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
				i++;
			j++;
			if (i == ft_strlen(str1))
			{
				i = 0;
				while (str1[i] != '\0')
				{
					write(1, &str1[i], 1);
					i++;
				}
				write(1, "\n", 1);
				return (0);
			}
		}
	}
	write(1, "\n", 1);
}