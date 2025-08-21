#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *str1 = argv[1];
		char *str2 = argv[2];
		int i = 0;
		int ascii[256] = {0};

		while (str1[i])
		{
			if (ascii[(int)str1[i]] == 0)
			{
				ascii[(int)str1[i]] = 1;
				write(1, &str1[i], 1);
			}
			i++;
		}
		i = 0;
		while (str2[i])
		{
			if (ascii[(int)str2[i]] == 0)
			{
				ascii[(int)str2[i]] = 1;
				write(1, &str2[i], 1);
			}
			i++;
		}
		
	}
	write(1,"\n", 1);
}