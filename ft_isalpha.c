/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dserrano <dserrano@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:08:28 by dserrano          #+#    #+#             */
/*   Updated: 2026/01/12 18:27:55 by dserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return 1;
    else
        return 0;
}

int main(void)
{
    int c;
    
    do {
        printf("Enter a num (0 to exit): ");
        scanf("%d", &c);

        printf("%d\n", ft_isalpha(c));
    } while (c);

    return 0;
}