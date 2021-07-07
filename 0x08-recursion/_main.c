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
	printf("abba: %d",is_palindrome("abba"));
	printf("'': %d\n", is_palindrome(""));

	return (0);
}
