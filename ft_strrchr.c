/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:36:04 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/16 22:15:51 by fguzman          ###   ########.fr       */
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
