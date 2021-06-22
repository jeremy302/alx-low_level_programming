#include <unistd.h>

int _putchar(char);
void putstr(char *str);

/**
 * main - starting point of the program
 *
 * Description: prints Holberton
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	putstr("Holberton\n");

	return (0);
}
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