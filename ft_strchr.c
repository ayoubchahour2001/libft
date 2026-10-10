/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:27:54 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/29 15:36:37 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    if(s[i] == c)
    {
        return ((char *)&s[i]);
    }
    return (NULL);
}