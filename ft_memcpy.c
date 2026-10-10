/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 19:50:34 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/28 00:56:18 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

int main(void)
{
	char	source[] = "Hello World 42";
	char	destination[50];

	memcpy(destination, source, 50);
	printf("the origine phrase is: %s\n", source);
	printf("the copy phrase is: %s\n", destination);
	return (0);
} */