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
	char *str = "hi there";
	char *ptr = _strdup(str);
	printf("str: |%s|\n", ptr);

	return (0);
}
