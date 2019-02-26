/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 22:56:29 by fguzman           #+#    #+#             */
/*   Updated: 2019/02/17 20:44:45 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *cdst;
	unsigned char *csrc;
	
	i = 0;  
	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	while (n > 0)
	{
		cdst[i] = csrc[i];
		i++;
		n = n - 1;
	}
	return (dst);
}
