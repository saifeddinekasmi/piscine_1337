/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 07:56:41 by skasmi            #+#    #+#             */
/*   Updated: 2021/08/27 08:14:29 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*int ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/
void *rev_print(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	while( i>= 0)
	{
		write(1,&str[i],1);
		i--;
	}
	return (str);
}
int main()
{
	char str[] = "saife";
	rev_print(str);
}
