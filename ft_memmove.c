/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 00:56:30 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/29 10:27:39 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	const unsigned char *s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		i = 0;
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while(i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "123456";

	printf("Before: %s\n", str);

	ft_memmove(str + 3, str, 4);

	printf("After:  %s\n", str);

	return (0);
} */