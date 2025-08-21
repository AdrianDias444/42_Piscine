/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: addias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:50:17 by addias            #+#    #+#             */
/*   Updated: 2025/08/03 14:50:19 by addias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char origem[] = "Teste";
	char destino[2];

	ft_strcpy(destino, origem);
	printf("Cópia: %s", destino);
}
*/
/*
	O QUE A FUNCAO DEVE FAZER
	- copiar caracter por caracter os valores que estao em src para dest
*/