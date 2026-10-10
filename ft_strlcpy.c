/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:27:42 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/29 11:03:37 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	len = 0;
	while(src[len])
		len++;
	return (len);
}
	
/* int main(void)
{
	char src[20] = "Hello";
	char dst[20];
	//ft_strlcpy(dst, src, 2);
	printf("%zu\n", ft_strlcpy(dst, src, 3));
	printf("dst: %s\n", dst);
	return (0);
} */