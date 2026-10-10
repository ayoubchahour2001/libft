/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:17:28 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/29 15:25:21 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return (c);
}

/* int main(void)
{
    printf("%c\n", ft_toupper('a'));
} */