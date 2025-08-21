int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

char *ft_strrev(char *str)
{
	int end = ft_strlen(str) - 1;
	int start = 0;
	char temp;

	while (start < end)
	{
		temp = str[end];
		str[end] = str[start];
		str[start] = temp;

		start++;
		end--;
	}
	return(str);
}