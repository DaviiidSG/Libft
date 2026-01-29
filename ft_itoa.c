/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserrano <dserrano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:32:11 by dserrano          #+#    #+#             */
/*   Updated: 2026/01/29 01:29:56 by dserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_fill_str(char *s, int digits, unsigned int is_negative, long n)
{
	if (is_negative)
	{
		s[digits + 1] = '\0';
		while (digits)
		{
			s[digits] = (n % 10) + '0';
			n /= 10;
			digits--;
		}
		s[0] = '-';
	}
	else
	{
		s[digits] = '\0';
		while (--digits >= 0)
		{
			s[digits] = (n % 10) + '0';
			n /= 10;
		}
	}
}

char	*ft_itoa(int n)
{
	long			temp_n;
	int				digit_count;
	unsigned int	is_negative;
	char			*num_str;

	temp_n = n;
	digit_count = ft_count_digits(temp_n);
	is_negative = 0;
	if (temp_n < 0)
	{
		is_negative = 1;
		temp_n = -temp_n;
		num_str = malloc((digit_count + 2) * sizeof(*num_str));
	}
	else
		num_str = malloc((digit_count + 1) * sizeof(*num_str));
	if (!num_str)
		return (NULL);
	ft_fill_str(num_str, digit_count, is_negative, temp_n);
	return (num_str);
}
