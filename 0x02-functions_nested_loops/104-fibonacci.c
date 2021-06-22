#include <stdlib.h>
#include <inttypes.h>


extern int _putchar(char);
void putstr(char *str);
typedef __int128 uint128;

int main(void)
{


    uint128 previous = 1;
    uint128 current = 2;
    uint128 accumulated;

    printf("1, 2");
    for(int i = 3; i <= 98; i++)
    {
        accumulated = previous + current;
        previous = current;
        current = accumulated;

        if(i != 3)
            printf(", ");

        //printf("%ju",i,current);
        print_uint128(current);
    }
    printf("\n");

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

void print_uint128(uint128 v)
{
    uint128 divisor = 10000000000000000000 * 10;
    uint128 quotient = v;
    char significant_zero = 0
    for(; divisor != 0; divisor /= 10)
    {
        char digit = quotient/divisor;
        if(digit == 0 && !significant_zero)
            continue;
        significant_zero = 1;

        putchar(digit + '0');
        quotient = quotient % divisor;
    }
}
