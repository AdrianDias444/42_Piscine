/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:14:24 by addias            #+#    #+#             */
/*   Updated: 2025/08/20 11:14:25 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *sep)
{
	int		i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(char **str, int size, char *sep)
{
	int	c;
	int	i;
	int	j;

	c = 0;
	i = 0;
	j = 0;
	if (size < c)
		return (0);
	while (c < size && str[c][j] != '\0')
	{
		i++;
		j++;
		if (str[c][j] == '\0')
		{
			c++;
			j = 0;
		}
	}
	return (i + (size - 1) * ft_strlen(sep));
}

char	*ft_juntar(int size, char **strs, char *sep, char *dest)
{
	int		c;
	int		j;
	int		k;
	int		s;

	c = 0;
	k = 0;
	while (c < size)
	{
		j = 0;
		while (strs[c][j] != '\0')
			dest[k++] = strs[c][j++];
		s = 0;
		if (c < size - 1)
		{
			while (sep[s] != '\0')
				dest[k++] = sep[s++];
		}
		c++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size == 0)
	{
		dest = malloc(1);
		return (dest);
	}
	dest = malloc(sizeof(char) * ft_strslen(strs, size, sep) + 1);
	if (!dest)
		return (NULL);
	ft_juntar(size, strs, sep, dest);
	return (dest);
}

/* int main(void)
{
    char *str[2];
    str[0] = "Hello";
    str[1] = "world";
	str[2] = "";
	str[3] = "world";

    char *res = ft_strjoin(2, str, "-");
    printf("%s\n", res);

    // free(res);
}
 */
