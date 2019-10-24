/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldos-san <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:41:10 by ldos-san          #+#    #+#             */
/*   Updated: 2019/10/24 16:41:23 by ldos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanumerico(char str)
{
	if ((str >= 'a' && str <= 'z') ||
		(str >= 'A' && str <= 'Z') ||
		(str >= 48 && str <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_strupcase(char *str)
{
	*str = *str - 32;
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		botao;
	int		naonumero;

	botao = 1;
	i = 0;
	naonumero = 1;
	while (*(str + i) != '\0')
	{
		if ((botao == 1) &&
		(*(str + i) >= 'a') && (*(str + i) <= 'z') && (naonumero == 1))
		{
			ft_strupcase(str + i);
			botao = 0;
		}
		if (((*(str + i) >= '0') && (*(str + i) <= '9')) ||
		((*(str + i) >= 'A') && (*(str + i) <= 'Z')))
			naonumero = 0;
		if (!ft_is_alphanumerico(*(str + i)) && naonumero == 0)
			naonumero = 1;
		if (!ft_is_alphanumerico(*(str + i)))
			botao = 1;
		i++;
	}
	return (str);
}
