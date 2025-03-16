/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:25:15 by ituren            #+#    #+#             */
/*   Updated: 2025/03/12 18:25:45 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include<stdio.h>

int main(){
	char str1[]="irem";
	char str2[]="trnm";
	printf("Önce: %s\n",str1);
	ft_strcpy(str1,str2);
	printf("Sonra: %s\n",str1);
}