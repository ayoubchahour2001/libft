/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:31:04 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/26 16:33:10 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *src)
{
    int i;

    i = 0;
    while(src[i])
        i++;
    return (i);
}

/* #include <stdio.h>

int main(void)
{
    char *src = "Hey 42";
    printf("%d\n", ft_strlen(src));
} */