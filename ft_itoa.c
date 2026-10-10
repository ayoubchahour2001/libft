/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 20:01:56 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/07 20:58:18 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

static int count_digits(int n)
{
    int count;
    count = 0;
    if(n == INT_MIN)
        return (10);
    if(n == 0)
        return (1);
    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

static int ft_size(int n)
{
    int result;

    result = count_digits(n);
    if(n < 0)
        result += 2;
    else
        result += 1;
    return (result);
}

char *ft_itoa(int n)
{
    char *result;
    long nb;
    int i;

    result = malloc(ft_size(n));
    if(!result)
        return (NULL);
    if(n == 0)
    {
        result[0] = '0';
        result[1] = '\0';
        return (result);
    }
    nb = n;
    if(nb < 0)
    {
        result[0] = '-';
        nb = -nb;
    }
    result[ft_size(n) - 1] = '\0';
    i = ft_size(n) - 2;
    while(nb > 0)
    {
        result[i] = (nb % 10) + '0';
        nb = nb / 10;
        i--;
    }
    return (result);
}

int main()
{
    printf("%s\n", ft_itoa(-1234));
    return (0);
}