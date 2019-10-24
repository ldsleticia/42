/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldos-san <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:38:07 by ldos-san          #+#    #+#             */
/*   Updated: 2019/10/24 16:38:19 by ldos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int indexo;

	indexo = 0;
	while (src[indexo] != '\0')
	{
		dest[indexo] = src[indexo];
		indexo++;
	}
	dest[indexo] = '\0';
	return (dest);
}
