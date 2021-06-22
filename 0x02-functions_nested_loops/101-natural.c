#include <stdlib.h>

extern int _putchar(char);
void putstr(char *str);

int main(void)
{
    int i, sum;
    char sum_str[10];

	for(i=0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
	itoa(sum, sum_str, 10);
	putstr(sum_str);

	return (0);
}

/**
 * putstr - writes a char array to stdout till it sees the null terminator: \0
 * @str: Pointer to the first array element
 *
 * Return: void
 */
void putstr(char *str)
{
	while(*str != '\0')
		_putchar(*str++);
}
