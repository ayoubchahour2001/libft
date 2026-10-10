/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 01:27:53 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/02 20:26:58 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t    ft_strlen(const char *src)
{
	int i;

	i = 0;
	while(src[i])
		i++;
	return (i);
}
char *ft_strdup(const char *s)
{
	int     i;
	char    *dup;
	int		len;
	
	len = ft_strlen(s);
	dup = malloc((len + 1) * sizeof(char));
	if(!dup)
		return (NULL);
	i = 0;
	while(s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int main()
{
	char *s;

	s = ft_strdup("Hello");
	if(!s)
		return (1);
	print("%s\n", s);
	free(s);
	return (0);
} */