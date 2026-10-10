#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int ft_count(char const *s, char c)
{
    int i = 0;
    int count = 0;
    int inword = 0;
    while(s[i])
    {
        if(s[i] == c)
            inword = 0;
        else if(inword == 0)
        {
            inword = 1;
            count++;
        }
        i++;
    }
    return (count);
}

/* int ft_count1(char const *s, char c)
{
    int i = 0;
    int count = 0;
    while(s[i])
    {
        if(s[i] != c && ((i == 0) || (s[i - 1] == c)))
            count++;
        i++;
    }
    return (count);
} */

char *ft_new_word(char const *s, int start, int end)
{
    char *word;
    int i = 0;

    word = malloc(end - start + 1);
    if(!word)
        return (NULL);
    while(start + i < end)
    {
        word[i] = s[i + start];
        i++;
    }
    word[i] = '\0';
    return (word);
}

/* char *ft_new(char const *s, int start, int end)
{
    int i;
    int j;
    char *word;

    i = start;
    word = malloc(end - start + 1);
    if(!word)
        return (NULL);
    j = 0;
    while(i < end)
    {
        word[j] = s[i];
        i++;
        j++;
    }
    word[j] = '\0';
    return (word);
} */

/* int main()
{
    char s[] = "Hello world0";
    printf("%s\n", ft_new(s, 2, 10));
} */
/* 
int ft_fill_word(char **result, char const *s, char c)
{
    int i;
    int start;
    int end;
    int index_word;
    
    i = 0;
    index_word = 0;
    while(s[i])
    {      
        if(s[i] == c)
            i++;
        else
        {
            start = i;
            end = start;
            while(s[end] && s[end] != c)
                end++;
            result[index_word] = ft_new(s, start, end);
            if(!result[index_word])
                return (index_word);
            index_word++;
            i = end;
        }
    }
    result[index_word] = NULL;
    return (index_word);
} */

void    free_memory(char **result, int index_word)
{
    int i;
    i = 0;
    while(i < index_word)
    {
        free(result[i]);
        i++;
    }
    free(result);
}



static int fill_word(char **result, char const *s, char c)
{
    int start, end, i, index_word;
    i = 0;
    index_word = 0;
    while(s[i])
    {
        
        
        if(s[i] == c)
            i++;
        else
        {
            start = i;
            end = start;
            while (s[end] && s[end] != c)
                end++;
            result[index_word] = ft_new_word(s, start, end);
            if(!result[index_word]) 
            {
                 free_memory(result, index_word);
                 return (-1);
            } 
            index_word++;
            i = end;
        }
    }
    result[index_word] = NULL;
    return (index_word);
}


/* int main(void)
{
    char s[] = "Hello world 42";
    int i = 0;
    char **result;
    int fill;
    result = malloc(4 * sizeof(char *));
    if(!result)
        return (1);
    fill = fill_word(result, s, ' ');
    while(i < fill)
    {
        printf("%s\n", result[i]);
        i++;
    }
    return (0);
}
 */

char **ft_split(char const *s, char c)
{
    char **result;
    int index_word;
    int word_count;
    if(!s)
        return (NULL);
    word_count = ft_count(s, c) + 1;
    result = malloc(word_count * sizeof(char *));
    if(!result)
        return (NULL);
    index_word = fill_word(result, s, c);
    if(index_word == -1)
        return(NULL);
    return(result);
}

static void	print_split(char const *s, char c)
{
	char	**r;
	int		i;

	printf("input: \"%s\"  sep: '%c'\n", s, c);
	r = ft_split(s, c);
	if (!r)
	{
		printf("  -> NULL\n\n");
		return ;
	}
	i = 0;
	while (r[i])
	{
		printf("  [%d] = [%s]\n", i, r[i]);
		free(r[i]);
		i++;
	}
	printf("  -> %d words\n\n", i);
	free(r);
}

int	main(void)
{
	print_split("Hello world 42", ' ');
	print_split("  a  b  ", ' ');
	print_split("   ", ' ');
	print_split("", ' ');
	print_split("nospace", ' ');
	print_split(",,a,,b,,c,,", ',');
	print_split("abc", 'z');
	return (0);
}