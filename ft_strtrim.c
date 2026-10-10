/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 04:55:34 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/04 23:20:45 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    if (s [i] == c)
        return ((char *)&s[i]);
    return(NULL);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *result;
    size_t s_len;
    size_t i;

    start = 0;
    end = ft_strlen(s1) - 1;
    while(start <= end && ft_strchr(set, s1[start]))
        start++;
    while(end >= start && ft_strchr(set, s1[end]))
        end--;
    if(start > end)
        s_len = 0; 
    else
        s_len = end - start + 1;
    result = malloc(s_len + 1);
    if(!result)
        return (NULL);
    i = 0;
    while(i < s_len)
    {
        result[i] = s1[start + i];
        i++;
    }
    result[s_len] = '\0';
    return (result);
}

#include <stdio.h>

int main()
{
    char s[] = "---Hello World---";
    char set[] = "-";
    printf("the new string es: %s\n", ft_strtrim(s, set));
    
}