/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:54:18 by ituren            #+#    #+#             */
/*   Updated: 2025/02/23 15:02:23 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_num(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}

void	ft_add_last(int one, int two, int three)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	if (!(one == 7 && two == 8 && three == 9))
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	int	one;
	int	two;
	int	three;

	one = 0;
	while (one <= 7)
	{
		two = one + 1;
		while (two <= 8)
		{
			three = two + 1;
			while (three <= 9)
			{
				ft_write_num(one);
				ft_write_num(two);
				ft_write_num(three);
				ft_add_last(one, two, three);
				three++;
			}
			two++;
		}
		one++;
	}
}
