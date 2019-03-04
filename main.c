/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 15:40:08 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/02 19:03:39 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main ()
{
  char string[55] ="ABC_ABB_ABA_AAA_BAB_ACC_CCA";
  char *p;
  p = ft_strstr (string, "AAA");
 	
 	printf("this is the computers [%s]\n", strstr(string, "AAA"));
  if(p)
  	{
		 printf("string found\n" );
   		 printf ("First occurrence of string \"test\" in \"%s\" is"\
           " \"%s\"",string, p);

	}
	else 
		printf("string not found\n" );
	return 0;
}
