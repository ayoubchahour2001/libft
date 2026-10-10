/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:27:32 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/03 01:27:37 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned	char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while(i < n)
	{
		ptr[i] =  0;
		i++;
	}
}

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *array;
    size_t  result;

    /* CHECK OVERFLOW ICI */
    if(size != 0 && nmemb > SIZE_MAX / size)
        RETURN (NULL);
    
    result = nmemb * size;
    array = malloc(result);
    if(!array)
        return (NULL);
    ft_bzero(array, result);
    return (array);
}


/*
#include <stdio.h>
#include <stdint.h>

int main()
{
    int *array;
    size_t i;

    array = ft_calloc(5, sizeof(int));
    if(!array)
        return (1);
    i = 0;
    while(i < 5)
    {
        printf("array : [%zu]  = %d\n", i, array[i]);
        i++;
    }

    array[0] = 42;
	array[1] = 100;
	array[2] = 1337;

	printf("\nAfter modification:\n");
	printf("array[0] = %d\n", array[0]);
	printf("array[1] = %d\n", array[1]);
	printf("array[1] = %d\n", array[2]);
    
    free(array);
    return (0);
} */

/* int main()
{
    void    *array;


    
    printf("===Test normal===\n");
    array = ft_calloc(5, sizeof(int));
    if (array)
    {
        printf("OK: allocation normale\n");
        free(array);
    }
    else
        printf("Error: allocation failed");
    

    
    printf("\n=== The overlow ===\n");
    array = ft_calloc(SIZE_MAX, 2);
    if(array == NULL)
        printf("ok: Overflow detected\n");
    else{
        printf("Error: Overflow NOT detected\n");
        free(array);
    }


    
    printf("\n=== Test zero ===\n");
    array = ft_calloc(0, sizeof(int));
    if(array)
    {
        printf("Allocation return to adress\n");
        free(array);
    }
    else
        printf("Returned NULL\n");
    return (0);
} */