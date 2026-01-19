/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserrano <dserrano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 18:50:54 by dserrano          #+#    #+#             */
/*   Updated: 2026/01/17 20:19:25 by dserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	chr;

	i = 0;
	chr = (unsigned char)c;
	while (s[i] != chr && s[i] != '\0')
		i++;
	if (s[i] == chr)
		return ((char *)(s + i));
	return (NULL);
}
