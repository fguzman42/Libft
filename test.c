/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:49:01 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/02 18:51:28 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char str[10] = "thisisast";

	printf("this is what I get -> [%s]\n", strstr(str,argv[1]));
	return (0);
}
