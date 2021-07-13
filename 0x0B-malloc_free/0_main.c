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
	char *str = create_array(15, 'b');

	str[14]='\0';
	printf("str: |%s|\n", str);

	return (0);
}
