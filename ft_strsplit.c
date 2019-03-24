/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 17:45:02 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/24 16:49:55 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int		ft_wc(char const *s, char c)
{
	int wc;
	int i;

	i = 0;
	wc = 0;
	while (s[i] != c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] != c && s[i] != '\0')
				wc++;
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	if (wc == 0)
		wc++;
	return (wc);
}


static int		ft_wl(char const *s, char c)
{
	size_t			i;
	unsigned int	l;

	i = 0;
	l = 0;
	if (!s)
		return (0);
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		l;
	int		a;

	i = 0;
	a = 0;
	if (!s || !(str = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1))))
		return (NULL);
	printf("%d\n", ft_wc(s, c));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		l = 0;
		if (s[i] != c)
		{
			str[a] = (char *)malloc(sizeof(char) * (ft_wl((s + i), c) + 1));
			while (s[i] && s[i] != c)
				str[a][l++] = s[i++];
		}
//		while (s[i] && s[i] == c)
//			i++;
//		if (s[i] == '\0' && l == 0 && !(str[a] = (char *)malloc(sizeof(char) * 1)))
//			str[a][l++] = '\0';
		str[a][l] = '\0';
		a++;
	}
	str[a] = NULL;
	return (str);
}
*/

static int	ft_wordcount(const char *s, char c)
{
	int wc;
	int i;

	i = 0;
	wc = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				i++;
				if (s[i] == c || s[i] == '\0')
					wc++;
			}
		}
		if (s[i] == '\0')
			break ;
		i++;
	}
	if (wc == 0)
		wc++;
	return (wc);
}

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
