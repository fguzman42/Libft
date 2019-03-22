/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 10:44:54 by phtruong          #+#    #+#             */
/*   Updated: 2019/03/22 15:51:43 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** Outputs the character c to the standard output.
*/

#include <unistd.h>
#include "libft.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
