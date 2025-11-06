/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vborysov <vborysov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:25:11 by vborysov          #+#    #+#             */
/*   Updated: 2025/11/06 15:53:40 by vborysov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char delimeter)
{
	size_t	result;
	int		in_word;

	result = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != delimeter && in_word == 0)
		{
			result++;
			in_word = 1;
		}
		else if (*s == delimeter)
		{
			in_word = 0;
		}
		s++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	word_start;
	size_t	word_end;
	char	**result;

	len = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	len = 0;
	word_start = 0;
	while (s[word_start])
	{
		if (s[word_start] != c)
		{
			word_end = word_start;
			while (s[word_end] && s[word_end] != c)
				word_end++;
			result[len++] = ft_substr(s, word_start, word_end - word_start);
			word_start = word_end;
		}
		else
			word_start++;
	}
	return (result[len] = NULL, result);
}

