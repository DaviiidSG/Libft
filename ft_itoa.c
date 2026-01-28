/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserrano <dserrano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:32:11 by dserrano          #+#    #+#             */
/*   Updated: 2026/01/28 21:04:15 by dserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int	sign;
	unsigned int	temp_n;
	char			*str;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		temp_n = -(long)n;
	}
}
