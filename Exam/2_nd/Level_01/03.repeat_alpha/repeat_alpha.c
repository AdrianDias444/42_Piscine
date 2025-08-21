#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		int repetir;
		while (str[i] !='\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				repetir = str[i] - 96 ;
				while (repetir > 1)
				{
					write(1, &str[i], 1);
					repetir--;
				}
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				repetir = str[i] - 64 ;
				while (repetir > 1)
				{
					write(1, &str[i], 1);
					repetir--;
				}
			}
			write(1, &str[i], 1);
			i++;
			
		}
		
	}
	write(1, "\n", 1);
}