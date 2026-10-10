/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychahou <aychahou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 02:57:46 by aychahou          #+#    #+#             */
/*   Updated: 2026/10/10 02:10:21 by aychahou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

static int ft_count_word(char const *s, char c)
{
	int i;
	int count;
	int in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] == c)
			in_word = 0;
		else if(in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char *ft_word(char const *s, int start, int end)
{
	int i;
	char *word;
	int length;

	length = end - start + 1;
	word = malloc(length);
	if(!word)
		return (NULL);
	i = 0;
	while(start + i < end)
	{
		word[i] = s[i + start];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_memory(char **result, int index_word)
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

static int ft_fill(char **result, char const *s, char c)
{
	int i;
	int start;
	int end;
	int index_word;

	i = 0;
	index_word = 0;
	while (s[i])
	{
		if(s[i] == c)
			i++;
		else
		{
			start = i;
			end = start;
			while(s[end] && s[end] != c)
				end++;
			result[index_word] = ft_word(s, start, end);
			if(!result[index_word])
				return (-1);
			index_word++;
			i = end;
		}	
	}
	result[index_word] = NULL;
	return (index_word);
}

char **ft_split(char const *s, char c)
{
	char **result;
	int index_word;

	result = malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if(!result)
		return (NULL);
	index_word = ft_fill(result, s, c);
	if(index_word == -1)
		return (NULL);
	return (result);
}

/* int main()
{
	int i = 0;
	char result[] = "Hello Word 42";
	char **split;
	
	split = ft_split(result, ' ');
	while(split[i])
	{
		printf("the result : [%d: %s]\n",i , split[i]);
		printf("the result : [%d: %p]\n",i , split[i]);
		i++;
	}
	free_memory(split, i);
	return (0);
} */