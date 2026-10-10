/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:25:34 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/29 15:27:36 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return (c);
}

int main(void)
{
    printf("%c\n", ft_tolower('A'));
}