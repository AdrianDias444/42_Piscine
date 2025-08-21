#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;

		char *str = argv[1];
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str [i] <= 'Z'))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					if(str[i] > 122 - 13)
					{
						str[i] = str[i] + 13;
						str[i] = str[i] - 123 + 97;
					}
					else
						str[i] = str[i] + 13;
				}
				if(str[i] >= 'A' && str [i] <= 'Z')
				{
					if(str[i] > 90 - 13)
					{
						str[i] = str[i] + 13;
						str[i] = str[i] - 91 + 65;
					}
					else
						str[i] = str[i] + 13;
				}
			}
			write(1, &str[i], 1);
			i++;	
		}
	}
	write(1, "\n", 1);
}