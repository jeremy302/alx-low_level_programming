#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
    //print_alphabet_x10(); //2-print_alphabet_x10

    //printf("%c is lower: %d\n",'b',_islower('b')); //3-islower
    //printf("%c is lower: %d\n",'A',_islower('A')); // 3-islower

    return (0);
}
