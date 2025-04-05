/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_separator(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_separator(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*copy_word(char *src, char *charset)
{
	int		len;
	char	*word;

	len = 0;
	while (src[len] && !is_separator(src[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (src[len] && !is_separator(src[len], charset))
	{
		word[len] = src[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**result;
	int		i;

	word_count = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!is_separator(*str, charset))
		{
			result[i] = copy_word(str, charset);
			if (result[i] == NULL)
				return (NULL);
			i++;
			while (*str && !is_separator(*str, charset))
				str++;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (result);
}

/*
int	main(void)
{
	char	*str = "Words to.be/splitted*in@six";
	char	*sep = "./*@! ";
	char	**words = ft_split(str, sep);
	int i = 0;

	printf("Before: %s\nAfter: \n", str);
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}
*/
