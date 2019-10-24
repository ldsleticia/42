/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleury- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:41:47 by tfleury-          #+#    #+#             */
/*   Updated: 2019/10/15 21:06:53 by tfleury-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write(1, &letra, 1);
		letra++;
	}
}


Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, em
ordem crescente, começando pela letra ’a’.

• Ela deve ser prototipada da seguinte maneira:
void ft_print_alphabet(void);