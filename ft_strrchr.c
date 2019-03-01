/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:36:04 by fguzman           #+#    #+#             */
/*   Updated: 2019/02/27 23:30:44 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
			return (char *)&s[len];
		len--;
	}
	return (NULL);
}
/*
char		*ft_strrchr(const char *s, int c)
{
	char ch = c;
	int i = 0;
	const char *ptr = s;
	int	len = ft_strlen(s);
	while (*s)
		s++;
	while (len > 0)
	{
		if (*s == ch)
			return (char *)&ptr[len];
		len--;
		s--;
	}
	return (NULL);
}


int		main(void)
{
	int len;
	const char str[] = "http//www.tutorialspoint.com";
	const char ch = '0';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("%s\n", ret);

	char *str2 = "leo is fucking awesome and you know it 0.-";
	int len2 = ft_strlen(str2) - 1;
	printf("%s  %c \n", str2, str2[len2]);
	str2++;
	printf("%s %c \n",str2,  str2[len2-1]);
	str2--;
	printf("%s %c \n", str2, str2[len2]);
	int i = 0;
	while (i++ < 10)
		str2++;
	printf("%s\n", str2);
	
	return 0;
}
*/
