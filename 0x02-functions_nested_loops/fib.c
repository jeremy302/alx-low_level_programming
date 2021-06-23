#include <stdlib.h>
#include <inttypes.h>
#include <stdio.h>


extern int _putchar(char);
typedef uint64_t uint64;
void print_uint64(uint64 v,uint64 radix, char prepend_zeroes);

int main(void)
{

	int i;
	uint64 carried_previous = 0, previous = 1;
	uint64 carried_current = 0, current = 2;
	uint64 carried_accumulated = 0, accumulated;

	/*
	 * max is supposed to be 10000000000000000 but the compiler couldn't parse high constants
     * so i decided to compute it at runtime
     */
	uint64 max = 100000000;
	max *= 100000000;

	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');

	for(i = 3; i <= 98; i++)
	{
		carried_accumulated = carried_current + carried_previous;
		accumulated = current + previous;

        carried_previous = carried_current;
        previous = current;

        carried_current = carried_accumulated;
        current = accumulated;

        while(current >= max)
        {
            carried_current += 1;
            current -= max;
        }

        if (i != 3)
        {
            putchar(',');
            putchar(' ');
        }
        print_uint64(carried_current,max/10,0);
        print_uint64(current,max/10,carried_current > 0);
	}
	putchar('\n');

	return (0);
}

void print_uint64(uint64 v,uint64 radix, char prepend_zeros)
{
    uint64 divisor = radix;
	uint64 quotient = v;
	char significant_zero = 0;

	for(; divisor != 0; divisor /= 10)
	{
		char digit = quotient/divisor;
		if(digit == 0 && !significant_zero && !prepend_zeros)
			continue;
		significant_zero = 1;

		putchar(digit + '0');
		quotient = quotient % divisor;
	}
}
