/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:24:20 by exam              #+#    #+#             */
/*   Updated: 2019/08/23 10:24:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	index;
	int	size;

	size = 0;
	while (str[size])
		size++;
	index = 0;
	while (index < size)
	{
		write(1, &str[size - 1 - index], 1);
		index++;
	}
	return (str);
}

//Write a function that print a string but in reverse order.
It must return its parameter.
Beware that the string wont be modifiable.
Your function must be declared as follows:

char    *rev_print(char *str);

Examples:

int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}

$> ./a.out | cat -e
hsad wobniar$
emosewa era seinoP$
$
$>
