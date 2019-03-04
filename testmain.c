#include <string.h>
#include <stdio.h>
#include "libft.h"

int main() 
{
  char ptr[] = "this is a test string";
  char *p;
  
  p = ft_strnstr(ptr, "test", 10);//strnstr(ptr, "test", 17);
  printf ("the first occurence of: %s -  is: %s", ptr, p);
  return (0);
}
