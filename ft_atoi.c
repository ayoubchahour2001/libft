/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:38:33 by aychahou          #+#    #+#             */
/*   Updated: 2026/09/29 15:50:07 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_atoi(const char *nptr)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			sign = -1;
		i++;
	}
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("+42"));
	printf("%d\n", ft_atoi("   -42"));
	printf("%d\n", ft_atoi("--42"));
	printf("%d\n", ft_atoi("-+42"));
	printf("%d\n", ft_atoi("+-42"));
}