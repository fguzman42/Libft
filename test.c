#include "libft.h"

int main(void)
{
	char **s;
	int i;

	s = ft_strsplit(" a c   c   ", ' ');
	i = 0;
	while (i < 3)
	{
		printf("%s\n", s[i++]);
	}
	return (0);
}
