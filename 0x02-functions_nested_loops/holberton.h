//#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char);

/**
 * putstr - writes a char array to stdout till it sees the null terminator: \0
 * @str: Pointer to the first array element
 *
 * Return: void
 */
void putstr(char *str); //main.c

void print_alphabet(void); //1-alphabet.c

void print_alphabet_x10(void); //2-print_alphabet_x10.c

int _islower(int c); //3-islower.c

int _isalpha(int c); //4-isalpha.c

int print_sign(int n); //5-sign.c

int _abs(int); //6-abs.c

int print_last_digit(int); //7-print_last_digit.c

void jack_bauer(void); //8-24_hours.c

void times_table(void); //9-times_table.c

int add(int, int); //10-add.c

void print_to_98(int n); //11-print_to_98.c

void print_times_table(int n); //100-times_table.c
