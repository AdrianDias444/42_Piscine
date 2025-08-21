/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 09:38:47 by addias            #+#    #+#             */
/*   Updated: 2025/08/04 09:38:50 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0 && src)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char dest [10];
	char src [] = "";
	unsigned int  size = 5;

	unsigned int result = ft_strlcpy(dest, src, size);
	
	printf("Copied string: %s\n", dest);
	printf("Length of src: %u\n", result);
	}
*/
/*
O QUE A FUNCAO FT_STRLCPY TEM DE FAZER
- Ver se o tamanho da string (fonte) src > 0, ou seja se existe (size > 0)
	- Se o numero de caracteres que estou colocando no destino seja
	menor que seu limite (size)
	- Copiar cada caracter da string (src) para a string de destino (dest)

*/