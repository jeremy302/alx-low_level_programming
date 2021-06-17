#include <unistd.h>
#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints a string to the standard error file
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char err_msg[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(err_msg, 1, sizeof(err_msg), stderr);
	return (1);
}
