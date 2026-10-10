/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:04:06 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/29 15:17:47 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len; // length of source
	size_t	dst_len; // length of destination
	size_t	i; // length of a concatenated

	src_len = 0;
	while (src[src_len])
		src_len++;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;

	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}

/* #include <stdio.h>

int main(void)
{
	char dst[20] = "hello ";
	char src[20] = "Ayoub";
	size_t fn;
	fn = ft_strlcat(dst, src, 6);
	printf("%zu\n", fn);
	printf("%s\n", dst);
} */