#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"  

int _putchar(char c)
{
  return (write(1, &c, 1));
}

int main(void)
{
	char *s1 = "former";
	char *s2 = " latter";

	printf("str: |%s|\n", str_concat(s1, s2));
	
	return (0);
}
