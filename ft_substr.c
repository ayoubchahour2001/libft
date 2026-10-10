/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 00:31:25 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/03 04:40:02 by aychahou         ###   ########.fr       */
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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  j;
    char    *result;
    size_t  actual_length;
    size_t    s_len;

    s_len = ft_strlen(s);
    
    if(start >= s_len)
        actual_length = 0;
    else if(len < s_len - start)
        actual_length = len;
    else
        actual_length = s_len - start;
    result = malloc(s_len + 1);
    if(!result)
        return (NULL);
    j = 0;
    while(j < actual_length)
    {
        result[j] = s[j + start];
        j++;
    }
    result[j] = '\0';
    return (result);
}

int main()
{
    char st[] = "Hello World";
    printf("the string : %s\n", ft_substr(st, 6, 5));
}