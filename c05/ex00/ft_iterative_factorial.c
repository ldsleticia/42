/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleury- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:36:55 by tfleury-          #+#    #+#             */
/*   Updated: 2019/10/21 21:47:51 by tfleury-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb < 0)
		return (0);
	else
	{
		i = 1;
		factorial = 1;
		while (nb > 0)
			factorial *= nb--;
		return (factorial);
	}
}
