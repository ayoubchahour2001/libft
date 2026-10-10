#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

static int counter(int n)
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

static int ft_size(int n)
{
    int size;
    
    size = counter(n);
    if(n < 0)
        size += 2;
    else
        size += 1;
    return (size);
}

char *ft_itoa(int n)
{
    int size;
    char *str;
    long nb;

    nb = n;
    size = ft_size(n);
    str = malloc(size);
    if(!str)
        return(NULL);
    str[size - 1] = '\0';
    if(nb == 0)
        str[0] = '0';
    size -= 2;
    if(nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while(0 < nb)
    {
        str[size] = (nb % 10) + '0';
        nb = nb / 10;
        size--;
    }
    return (str);
}
int main()
{
    char *count;
    count = ft_itoa(-1234);
    printf("%s\n", count);
    free(count);
    return (0);
}