/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 17:45:02 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/22 17:50:44 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

static int		wordlen(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(const char *s, char c)
{
	int		l;
	int		a;
	int		skip;
	char	**str;

	a = 0;
	l = 0;
	skip = 0;
	if (!s ||
		!(str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (s[skip])
	{
		str[a] = (char *)malloc(sizeof(char) * (wordlen(&s[skip], c) + 1));
		while (s[skip] != c && s[skip] != '\0')
		{
			str[a][l++] = s[skip++];
			if (s[skip] == c || s[skip] == '\0')
				str[a++][l] = '\0';
			l = ((s[skip] == c || s[skip] == '\0') ? 0 : l);
		}
		skip += (s[skip] == '\0' ? 0 : 1);
	}
	str[a] = (NULL);
	return (str);
}
*/
#include <libft.h>

static	char	*allocate_word(char const *s, char c, char **words, int num)
{
	int c1;
	int c2;

	c1 = 0;
	c2 = 0;
	while (*s == c)
		s++;
	while (s[c1] != c && s[c1] != '\0')
		c1++;
	words[num] = (char*)malloc(sizeof(char) * c1);
	if (words[num])
	{
		while (*s != c && *s != '\0')
		{
			words[num][c2++] = *s;
			s++;
		}
		words[num][c2] = '\0';
		return ((char *)s);
	}
	return (NULL);
}

static	int		get_number_words(char const *s, char c)
{
	int wordc;
	int flag;

	wordc = 0;
	flag = 0;
	while (*s != '\0')
	{
		while (*s == c)
		{
			if (flag)
			{
				wordc++;
				flag = 0;
			}
			s++;
		}
		if (*s != '\0')
			flag = 1;
		else
			return (wordc);
		s++;
	}
	if (flag)
		wordc++;
	return (wordc);
}

char			**ft_strsplit(char const *s, char c)
{
	int		c1;
	char	**words;
	int		num;
	int		offset;

	if (s && c)
	{
		c1 = 0;
		offset = 0;
		num = get_number_words(s, c);
		words = (char**)malloc((num + 1) * sizeof(char*));
		if (words)
		{
			while (c1 < num)
			{
				s = allocate_word(s, c, words, c1);
				c1++;
			}
			words[c1] = (char*)malloc(sizeof(char));
			words[c1] = NULL;
			return (words);
		}
	}
	return (NULL);
}
