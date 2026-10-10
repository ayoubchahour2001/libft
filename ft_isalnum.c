/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:12:31 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/26 16:22:42 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* #include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum(' '));
} */