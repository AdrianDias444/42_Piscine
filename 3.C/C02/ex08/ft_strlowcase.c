/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 08:47:47 by addias            #+#    #+#             */
/*   Updated: 2025/08/04 08:47:50 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
		}
		else
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char palavra[] = "jdFJLAHFL..DSJFdsjfd";
	printf("%s", ft_strlowcase(palavra));
}
*/