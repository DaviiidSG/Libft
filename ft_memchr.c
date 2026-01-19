/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserrano <dserrano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:57:28 by dserrano          #+#    #+#             */
/*   Updated: 2026/01/19 13:17:28 by dserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*temp_s;
	unsigned char		temp_c;
	size_t				i;

	temp_s = (unsigned char *)s;
	temp_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temp_s[i] == temp_c)
			return (s + i);
	}
	return (NULL);
}
