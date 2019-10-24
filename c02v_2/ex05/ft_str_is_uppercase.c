/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldos-san <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:39:56 by ldos-san          #+#    #+#             */
/*   Updated: 2019/10/24 16:40:05 by ldos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (*(str + i) != 0)
	{
		if (!(char_is_uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
