#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int nb = 2;
	if (n == 1)
		return (1);

		
	while (nb <= n)
	{
		if (nb == n)
			return (1);
		nb = nb * 2;
	}
	return (0);
}

int main(void)
{
	printf("%d", is_power_of_2(1));
}