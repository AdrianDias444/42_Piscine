#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void printNumbers(int nb)
{
	putchar(nb / 10 + '0');
	putchar(nb % 10 + '0');
	putchar('\n');
}

int main(void)
{
	int number = 1;
	while (number <= 100)
	{
		if(number % 3 == 0 || number % 5 == 0)
		{
			if ((number % 3 == 0) && (number % 5 == 0))
				write(1, "fizzbuzz\n", 9);
			else if (number % 3 == 0)
				write(1, "fizz\n", 5);
			else if (number % 5 == 0)
				write(1, "buzz\n", 5);
		}
		else
		{
			printNumbers(number);
		}
		number++;
	}
	
}