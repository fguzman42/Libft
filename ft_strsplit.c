/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 17:45:02 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/22 18:45:36 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordlen(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int		ft_wordcount(char const *s, char c)
{
	int wc;
	int i;

	i = 0;
	wc = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
		{
			i++;
			if (s[i] != c)
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

char			**ft_strsplit(char const *s, char c)
{
	int		l;
	int		a;
	int		skip;
	char	**str;

	a = 0;
	l = 0;
	skip = 0;
	if (!s)
		return(NULL);
	if(!(str = (char **)malloc(sizeof(char *) * (1))))
		return (NULL);
	while (s[skip])
	{
		if (!(str[a] = (char *)malloc(sizeof(char) * (1))))
			return(NULL);
		while (s[skip] != c && s[skip] != '\0')
		{
			str[a][l++] = s[skip++];
			if (s[skip] == c || s[skip] == '\0')
				str[a++][l] = '\0';
			l = ((s[skip] == c || s[skip] == '\0') ? 0 : l);
		}
		skip += (s[skip] == '\0' ? 0 : 1);
	}
	str[a] = NULL;
	return (str);
}
