/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 00:18:32 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/30 19:42:03 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*a1;
	const unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && a1[i] && (a1[i] == a2[i]))
	{
		i++;
	}
	return (a1[i] - a2[i]);
}

/* int main(void)
{
	char r1[] = "Hello";
	char r2[] = "Helloa";
	printf("%d\n",ft_strncmp(r1, r2, 8));
} */