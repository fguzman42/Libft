/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:05:25 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/08 16:21:49 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	
	char *str;
	unsigned int i;
	int sc;
	int start;
	int end;
	i = 0;
	start = 0;
	end = 0;
	if (!s)
	{
		return NULL;
	}
	while (s[i])
	{
		if (s[i] != '\t' &&  s[i] != ' '  &&  s[i] != '\n')
		{
			start = i;
			break;
		}
		i++;
		start = i;
	}
	if (s[i] == '\0')
		start = 0;
	i = ft_strlen(s);
	while (i-- > 0)
	{
		if (s[i] != '\t' && s[i] != ' ' && s[i] != '\n')
		{
			break;
		}
		end++;
	}
	if (!(str = (char *)malloc(ft_strlen(s) - (start + end) + 1)))
	{
		return NULL;
	}
	i = 0;
	sc = start;
	while (s[start])
	{
		if (i  >= ft_strlen(s) - (start + end))
				break;
		str[i] = s[sc];
		i++;
		sc++;
	}
	str[i] = '\0';
	return (str);
}
