/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:53:29 by ituren            #+#    #+#             */
/*   Updated: 2025/02/23 15:03:41 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		c;
	char	neg;
	int		num;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		neg = '-';
		nb = -nb;
		write(1, &neg, 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	num = nb % 10;
	c = num + '0';
	write(1, &c, 1);
}
