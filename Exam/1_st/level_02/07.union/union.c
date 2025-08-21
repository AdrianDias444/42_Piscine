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
	if (argc == 3)
	{
		char *str = argv[1];
		char *str2 = argv[2];
		int i = 0;
		int c;
		int j = 0;
		int k;
		while (str[i] != '\0')
		{
			c = 0;
			while (c < i)
			{
				if (str[c] == str[i])
					break;
				c++;
			}
			if(c == i)
				write(1, &str[i], 1);
			i++;	
		}
		while (j < ft_strlen(str2))
		{
			k = 0;
			while (k < j)
			{
				if (str2[k] == str2[j])
					break;
				k++;
			}
			if (k == j)
			{
				c = 0;
				while (str[c] && str[c] != str2[j])
					c++;
				if (str[c] == '\0')
					write(1, &str2[j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
}