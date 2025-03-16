/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:19:10 by ituren            #+#    #+#             */
/*   Updated: 2025/03/12 14:40:18 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*arg;

	i = argc - 1;
	while (i > 0)
	{
		arg = argv[i];
		write(1, arg, ft_strlen(arg));
		write(1, "\n", 1);
		i--;
	}
}
