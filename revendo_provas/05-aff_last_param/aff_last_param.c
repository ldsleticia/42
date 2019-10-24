/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:30:51 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 10:30:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str_write(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_str_write(argv[argc - 1]);
	ft_str_write("\n");
}

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "Zelda" "is" "a" "boy" | cat -e
boy$
$> ./aff_last_param "I read this on internet !" | cat -e
I read this on internet !$
$> ./aff_last_param | cat -e
$