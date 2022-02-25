/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:28:29 by skasmi            #+#    #+#             */
/*   Updated: 2021/08/17 14:42:53 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	iDest;
	unsigned int	jSrc;

	iDest = 0;
	jSrc = 0;
	while (dest[iDest] != '\0')
	{
		iDest++;
	}
	while (src[jSrc] != '\0' && jSrc < nb)
	{
		dest[iDest] = src[jSrc];
		iDest++;
		jSrc++;
	}
	dest[iDest] = '\0';
	return (dest);
}
