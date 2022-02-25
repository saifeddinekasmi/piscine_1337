/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:29:16 by skasmi            #+#    #+#             */
/*   Updated: 2021/08/26 15:54:05 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int main()
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0 )
		{
			write (1, "fizzbuzz\n", 9);
		}	
		else if (i % 3 == 0)
		{
			write (1, "fizz\n", 5);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz\n", 5);
		}	
		else 
		{
			ft_putnbr(i);
        write (1, "\n", 1);
		}
		i++;
	}
}
