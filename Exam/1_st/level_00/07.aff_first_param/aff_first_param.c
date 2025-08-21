 
#include <unistd.h>

int main(int argc, char **argv)
{

	if(argc > 1)
	{
		char *str = argv[1];

		int i = 0;
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}