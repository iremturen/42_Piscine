/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:08:07 by ituren            #+#    #+#             */
/*   Updated: 2025/02/23 15:02:48 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_num(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}

void	ft_add_last(void)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 98)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_write_num(f / 10);
			ft_write_num(f % 10);
			write(1, " ", 1);
			ft_write_num(s / 10);
			ft_write_num(s % 10);
			if (!(f == 98 && s == 99))
				ft_add_last();
			s++;
		}
		f++;
	}
}
