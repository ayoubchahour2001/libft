#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int counter(int n)
{
    int count;

    count = 0;
    if(n == 0)
        return (1);
    if(n == INT_MIN)
        return (10);
    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

int ft_size(int n)
{
    int size;

    size = counter(n);
    if(n < 0)
        size += 2;
    else
        size += 1;
    return (size);
}

int ft_itoa(int n)
{
    int size;

    size = malloc(ft_size(n));
    if(!size)
        return (size);
    
}

int main()
{
    printf("%d\n", ft_size(-12));
    return (0);
}