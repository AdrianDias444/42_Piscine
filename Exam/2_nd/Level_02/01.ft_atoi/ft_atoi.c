#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{

	int i = 0;
	int signalCounter = 0;
	int negativo = 0;
	int res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		signalCounter++;
		if (signalCounter > 1)
			return(0);
		if (str[i] == '-')
			negativo = 1;
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	
	if (negativo == 1)
		res = res * -1;
	return(res);
}


int main(void)
{
	char *str = "\n\v\r\f\t    +-32";
	printf("%d\n%d", atoi(str), ft_atoi(str));
}