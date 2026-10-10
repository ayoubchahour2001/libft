/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:22:00 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/26 16:25:38 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isascii('5'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('a'));
} */