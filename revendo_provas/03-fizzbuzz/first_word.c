/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 18:10:48 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 18:10:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	print_first_word(char *str)
{
	int		index;
	int		offset;
	char	*word;

	index = 0;
	word = str;
	while (is_space(str[index]))
		index++;
	offset = index;
	while (true)
	{
		if (str[index] == '\0')
			break ;
		if (is_space(str[index]))
			break ;
		index++;
	}
	if (word != 0)
		write(1, word + offset, index - offset);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_first_word(argv[1]);
	write(1, "\n", 1);
}

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONIES !!" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$