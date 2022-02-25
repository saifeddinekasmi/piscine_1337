/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:06:32 by skasmi            #+#    #+#             */
/*   Updated: 2021/08/26 16:29:13 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 int	ft_atoi(const char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 0;
	  
	while (str[i] == ' ' || str[i] == '\t')
	i++;
    while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j = j * -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		k = (str[i] - '0') +  (k * 10);
	i++;
	}
	return (k * j);
}
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char str[] = "  	+----+---123vv25i";
//	printf ("%d\n", ft_atoi(str));
	printf ("%d", atoi(str));
}
