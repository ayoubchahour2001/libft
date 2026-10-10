/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:09:53 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/30 20:20:41 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    const unsigned  char  *a1;
    const unsigned  char  *a2;

    i = 0;
    a1 = (const unsigned char *)s1;
    a2 = (const unsigned char *)s2;
    if(n == 0)
        return (0);
    while(i < n)
    {
        if(a1[i] != a2[i])
        {
            return(a1[i] - a2[i]);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    printf("%d\n", ft_memcmp("abcda", "abcd", 5));
}