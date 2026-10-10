/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:18:00 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/01 00:56:22 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	const unsigned char *b;
	const unsigned char *l;
	
	
	b = (const unsigned char *)big;
	l = (const unsigned char *)little;
	i = 0;
	while(i < len && b[i])
	{
		j = 0;
		while(i + j < len && l[j])
		{
			if(b[i + j] == l[j])
			{
				j++;
			}
			else
			{
				break;	
			}
		}
		if (little[j] == '\0')
			return ((char *)&b[i]);
		i++;
	}
	return (NULL);
}

int main(void)
{
	char big[] = "Hello World";
	char litlle[] = "World";
	printf("%s\n", ft_strnstr(big, litlle, 11));
}