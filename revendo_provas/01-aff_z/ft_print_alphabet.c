/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleury- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:41:47 by tfleury-          #+#    #+#             */
/*   Updated: 2019/10/15 21:06:53 by tfleury-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		ft_putchar(letra);
		letra++;
	}
}


Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, em
ordem crescente, começando pela letra ’a’.

• Ela deve ser prototipada da seguinte maneira:
void ft_print_alphabet(void);