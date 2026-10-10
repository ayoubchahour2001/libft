/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 23:41:27 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/30 00:18:37 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	int last;

	i = 0;
	last = -1;
	while (s[i])
	{
		if (s[i] == c)
		{
			last = i;
		}
		i++;
	}
	if (last == -1)
		return (NULL);
	else
		return ((char *)&s[last]);
}

/* #include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strrchr("banana", 'x'));
} */