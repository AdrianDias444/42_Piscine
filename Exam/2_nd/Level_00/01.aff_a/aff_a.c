#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str = argv[1];

	if(argc == 2)
	{		
		while (str[i] != '\0')
		{
			if (str[i] == 'a')
			{
				break;
			}
			i++;
		}
		if (str[i] != 'a')
		{
			write(1, "\n", 1);
			return(0);
		}
		
	}
	write(1, "a\n", 2);
	
}