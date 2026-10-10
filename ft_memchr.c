/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:49:40 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/30 20:07:04 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t  i;
	const unsigned char *a;

	a = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
		{
			return ((void	*)&a[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "Hello";
	int c = 'l';
	size_t  n = 3;
	printf("the character is : %c\n", *(char *)ft_memchr(str, c , n));
	printf("the pointer is : %p\n", ft_memchr(str, c , n));
}