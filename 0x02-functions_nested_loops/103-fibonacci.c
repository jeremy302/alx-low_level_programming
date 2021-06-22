#include <stdlib.h>

extern int _putchar(char);
void putstr(char *str);
unsigned long long fib(int x);

int main(void)
{
    char fib_str[20];

    unsigned long long previous = 1, current = 2, accumulated;


    putstr("1\n2\n");
    unsigned long long sum = 2;
    while (current <= 4000000)
    {

        accumulated = previous + current;
        previous = current;
        current = accumulated;

        if(current%2==0)
        {
            sum += current;
        }

        char* sum_str[20];

        lltoa(sum,sum_str,10);
        putstr(sum_str);
        putstr("\n");
    }


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
		putchar(*str++);
}
