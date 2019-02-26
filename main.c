/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:40:08 by fguzman           #+#    #+#             */
/*   Updated: 2019/02/23 21:28:30 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	char *a = "123456";
	char *b = "abcdefg";
	char *c = "456";
	char *d = "efg";
	printf("this is testing strncat: a = %s b = %s\n", a, b);
	printf("this is testing strlcat c = %s d = %s\n", c, d);
	//strncat(a, b, 5);
	//strlcat(c, d, 5);
	printf("this is strncat %s\n", strncat(a, b, 5));
	printf("this is strlcat %lu\n", strlcat(c, d, 5));
	return (0);
}
