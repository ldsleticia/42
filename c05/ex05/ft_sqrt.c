/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleury- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 00:25:44 by tfleury-          #+#    #+#             */
/*   Updated: 2019/10/23 00:35:50 by tfleury-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int	sqrt;
	unsigned int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	i = 0;
	while ((sqrt = i * i) <= (unsigned int)nb)
		i++;
	i -= 1;
	return (i * i == (unsigned int)nb ? i : 0);
}
