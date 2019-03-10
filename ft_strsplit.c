/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguzman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 17:45:02 by fguzman           #+#    #+#             */
/*   Updated: 2019/03/10 14:54:26 by fguzman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strcounter(char const *s, char c)
{
	int i;
	int l;
	int sc;
	int cc;
	i = 0;
	sc = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			l = i;
			while (s[l] != c)
				{
					l++;
					c++;
					if (s[l] == c)
					{
						sc++;
						i = l;
					}
				}
		}
		i++;
	}
	if (c == 0)
		return 0;
	return (sc);
}
/*
int	main(void)
{
	char *s;
	s = "1 2 3 4 5 6 7 8 9     ";
	printf("the number of strings inside: %s is: %d\n", s, strcounter(s, 'a'));
			return (0);
}
*/
