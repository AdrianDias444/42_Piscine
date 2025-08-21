#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long n = nb;

	if (n < 0)
	{
		n  = -n;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}


int main(void)
{
	ft_putnbr(-41232);
}