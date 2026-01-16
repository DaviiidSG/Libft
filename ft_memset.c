/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserrano <dserrano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 08:46:15 by dserrano          #+#    #+#             */
/*   Updated: 2026/01/15 18:34:17 by dserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	val;
	size_t			i;

	dest = (unsigned char *)s;
	val = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = val;
		i++;
	}
	return (s);
}
