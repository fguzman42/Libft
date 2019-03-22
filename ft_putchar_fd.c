/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 10:50:36 by phtruong          #+#    #+#             */
/*   Updated: 2019/03/22 15:51:59 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** Outputs the char c to the file descriptor fd
*/

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
