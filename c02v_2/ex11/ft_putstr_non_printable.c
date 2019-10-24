/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldos-san <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:42:15 by ldos-san          #+#    #+#             */
/*   Updated: 2019/10/24 16:42:26 by ldos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int j, char hexadecinum[100])
{
	if (j == 0)
	{
		write(1, "0", 1);
		while (j >= 0)
		{
			write(1, &hexadecinum[j], 1);
			j--;
		}
	}
	else
		while (j >= 0)
		{
			write(1, &hexadecinum[j], 1);
			j--;
		}
}

void	hexadecimal(char n)
{
	char	hexadecinum[100];
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 87;
		}
		hexadecinum[i] = temp;
		i++;
		n = n / 16;
	}
	j = i - 1;
	print(j, hexadecinum);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (((*(str + i) < 32) || (*(str + i) > 126)))
		{
			write(1, "\\", 1);
			hexadecimal(*(str + i));
		}
		else
		{
			c = *(str + i);
			write(1, &c, 1);
		}
		i++;
	}
}
