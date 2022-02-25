/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:29:04 by skasmi            #+#    #+#             */
/*   Updated: 2021/08/17 13:24:28 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	iDest;
	int	jSrc;

	iDest = 0;
	jSrc = 0;
	while (dest[iDest] != '\0')
	{
		iDest++;
	}
	while (src[jSrc] != '\0')
	{
		dest[iDest] = src[jSrc];
		iDest++;
		jSrc++;
	}
	dest[iDest] = '\0';
	return (dest);
}
