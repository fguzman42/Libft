/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:36:04 by fguzman           #+#    #+#             */
/*   Updated: 2019/02/27 22:13:08 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[ft_strlen(s)] > 0)
	{
		if (s[ft_strlen(s)] == c)
		return ((char*)s);
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
