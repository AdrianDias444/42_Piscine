#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int sinalCounter = 0;
	int negativo = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+' || str[i] == '-')
		{
			sinalCounter++;
			if (str[i] == '-')
				negativo = 1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (sinalCounter >= 2)
		return(0);
	if (sinalCounter == 1 && negativo == 1)
		res = 0 - res;
	return(res);
}

int main()
{
	char *str = "\f\t\r\v\n  -1234abc567";
	printf("%d\n%d\n", atoi(str), ft_atoi(str));
}