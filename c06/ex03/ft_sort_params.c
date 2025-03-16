/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:24:12 by ituren            #+#    #+#             */
/*   Updated: 2025/03/12 14:34:09 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int argc, char *argv[])
{
	int	i;
	int	v;

	v = 1;
	while (v != argc)
	{
		i = 0;
		while (argv[v][i] != '\0')
		{
			write(1, &argv[v][i], 1);
			i++;
		}
		write(1, "\n", 1);
		v++;
	}
}

void	ft_swap(char **v1, char **v2)
{
	char	*c;

	c = *v1;
	*v1 = *v2;
	*v2 = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	v;

	v = 1;
	while (v < argc - 1)
	{
		if (ft_strcmp(argv[v], argv[v + 1]) > 0)
		{
			ft_swap(&argv[v], &argv[v + 1]);
			v = 1;
		}
		else
		{
			v++;
		}
	}
	ft_putstr(argc, argv);
	return (0);
}
