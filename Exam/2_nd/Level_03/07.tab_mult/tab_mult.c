#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(long n)
{
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
int ft_atoi(const char *str)
{
	int res = 0;
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res);
}


void ft_tabuada(int resposta, int multi, int numero)
{
	resposta = multi * numero;
	ft_putchar(multi + '0');
	ft_putchar(' ');
	ft_putchar('x');
	ft_putchar(' ');
	ft_putnbr(numero);
	ft_putchar(' ');
	ft_putchar('=');
	ft_putchar(' ');
	ft_putnbr(resposta);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int numero = ft_atoi(argv[1]);
		int multi = 1;
		int resposta = 0;

		while (multi < 10)
		{
			if(multi < numero)
			{
				ft_tabuada(resposta, multi, numero);
				ft_putchar('\n');
			}
			else
			{
				ft_tabuada(resposta, multi, numero);
				return (1);
			}
			multi++;
		}
		return(0);

	}
	write(1, "\n", 1);
}