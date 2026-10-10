/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 04:40:26 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/03 04:54:33 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    char *res;
    size_t s_len;

    s_len = ft_strlen(s1) + ft_strlen(s2);
    res = malloc(s_len + 1);
    if(!res)
        return (NULL);
    i = 0;
    while(s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
    {
        res[i] = s2[j];
        j++;
        i++;
    }
    res[i] = '\0';
    return (res);
}

int main()
{
    char s1[] = "Hello ";
    char s2[] = "World";
    printf("the new string : %s\n", ft_strjoin(s1, s2));
}