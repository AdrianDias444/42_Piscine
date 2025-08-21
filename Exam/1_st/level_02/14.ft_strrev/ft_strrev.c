#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}


char	*ft_strrev(char *str)
{
	int end = ft_strlen(str) - 1;
	int start = 0;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
	return(str);
}

/*
int main(void)
{
	char str[] = "abc";
	printf("%s", ft_strrev(str));
}
*/