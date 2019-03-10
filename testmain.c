#include <string.h>
#include <stdio.h>
#include "libft.h"


/*
int main() 
{
  char ptr[] = "this is a test string";
  char *p;
  
  p = ft_strnstr(ptr, "test", 10);//strnstr(ptr, "test", 17);
  printf ("the first occurence of: %s -  is: %s", ptr, p);
  return (0);
}


int main(void)
{
	char s1[] = "";
	char s2[] = "";
	int i;
	int p;

	p = strcmp(s1, s2);
	i = ft_strcmp(s1, s2);
	//i = ft_strcmp(s1, s2);
	//printf("the difference between the first character difference in the string '%s' and '%s' is: %d", s1, s2, i);
	printf("ft_strcmp(s1, s2) = %d\n", i);
	printf("strcmp(s1, s2) = %d\n", p);
	return (0);
}



int	main(int argc, char **argv)
{
	if (argc != 2)
		return (-1);

	printf("after atoi, '%s' becomes '%d'\n", argv[1], ft_atoi(argv[1]));
	return (0);
}



int	main(int argc, char **argv)
{
	char *str;
	if (argc == 2)
	{
		str = ft_strtrim(argv[1]);
		//printf("%s\n", argv[1]);
		//printf("this is the string without any spaces \n%s\n", str);
	}
	return (0);
}
*/

int	main(void)
{
	char *str;

	str = ft_strtrim("\t    \t\t\t\t\t\t\t\t       \n\n\n\n\n\n\n\n\n\n\n");
	printf("this is the string without any spaces \n%s\n", str);
	return (0);
}
