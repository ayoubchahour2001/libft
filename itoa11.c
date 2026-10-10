#include <stdio.h>
#include <limits.h>

int count_digits(int n)
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
    int result;

    result = count_digits(n);
    if(n < 0)
        result += 2;
    else    
        result += 1;
    return (result);
}

int main()
{
    int nb = -1234;
    printf("%d\n", ft_size(nb));
}

/* char *ft_itoa(int n)
{
    long nb;
    int i;
    int *result;

    result = malloc(ft_size(n));
    if(!result)
        return(NULL);
    if(n == 0)
    {
        result[0] = '0';
        result[1] = '\0';
        return (result);
    }
    nb = n;
    if(nb < 0)
    {
        result[0] = '-';
        nb = -nb;
    }
    result[ft_size(n) - 1] = '\0';
    i = ft_size(n) - 2;
    while(nb > 0)
    {
        result[i] = (nb / 10) + '0';
        nb = nb / 10;
        i--;
    }
    return (result);
} */