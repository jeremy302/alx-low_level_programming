#include <stdio.h>
#include "0-isupper.c"
#include "1-isdigit.c"
#include "2-mul.c"
#include "3-print_numbers.c"
#include "4-print_most_numbers.c"
#include "5-more_numbers.c"
#include "6-print_line.c"
#include "7-print_diagonal.c"
#include "8-print_square.c"
/*#include "9-fizz_buzz.c"*/
#include "10-print_triangle.c"
/*#include "100-prime_factor.c"*/
#include "101-print_number.c"
#include <limits.h>

void test_0()
{
	printf("Testing 0-isupper.c\n");

	printf("A: %d\n",_isupper('A'));
	printf("a: %d\n",_isupper('a'));
	printf("Z: %d\n",_isupper('Z'));
	printf("z: %d\n",_isupper('z'));
	printf("k: %d\n",_isupper('k'));
	printf("K: %d\n",_isupper('K'));
	printf("4: %d\n",_isupper('4'));
	printf(";: %d\n",_isupper(';'));

	printf("\nTest ended\n\n");
}

void test_1()
{
	printf("Testing 1-_isdigit.c\n");

	printf("0: %d\n",_isdigit('0'));
	printf("9: %d\n",_isdigit('9'));
	printf("5: %d\n",_isdigit('5'));
	printf("a: %d\n",_isdigit('a'));
	printf("Z: %d\n",_isdigit('Z'));
	printf(";: %d\n",_isdigit(';'));

	printf("\nTest ended\n\n");
}

void test_2()
{
	printf("Testing 2-mul.c\n");

	printf("0 * 0: %d\n",mul(0,0));
	printf("1 * 0: %d\n",mul(1,0));
	printf("5 * 5: %d\n",mul(5,5));
	printf("99 * 99: %d\n",mul(99,99));

	printf("\nTest ended\n\n");
}

void test_3()
{
	printf("Testing 3-print_numbers.c\n");

	print_numbers();

	printf("\nTest ended\n\n");
}

void test_4()
{
	printf("Testing 3-print_most_numbers.c\n");

	print_most_numbers();

	printf("\nTest ended\n\n");
}

void test_5()
{
	printf("Testing 5-more_numbers.c\n");

	more_numbers();

	printf("\nTest ended\n\n");
}

void test_6()
{
	printf("Testing 6-print_line.c\n");

	printf("5:\n");
	print_line(5);
	printf("15:\n");
	print_line(15);
	printf("0:\n");
	print_line(0);
	printf("-3:\n");
	print_line(-3);
	printf("1:\n");
	print_line(1);

	printf("\nTest ended\n\n");
}

void test_7()
{
	printf("Testing 7-print_diagonal.c\n");

	printf("5:\n");
	print_diagonal(5);
	printf("15:\n");
	print_diagonal(15);
	printf("0:\n");
	print_diagonal(0);
	printf("-3:\n");
	print_diagonal(-3);
	printf("1:\n");
	print_diagonal(1);

	printf("\nTest ended\n\n");
}

void test_8()
{
	printf("Testing 8-print_square.c\n");

	printf("5:\n");
	print_square(5);
	printf("15:\n");
	print_square(15);
	printf("0:\n");
	print_square(0);
	printf("-3:\n");
	print_square(-3);
	printf("1:\n");
	print_square(1);

	printf("\nTest ended\n\n");
}

void test_9()
{
	printf("Testing 9-fizz_buzz.c\n");
	
	system("gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o _test_9 9-fizz_buzz.c -lm && _test_9");

	printf("\nTest ended\n\n");
}

void test_10()
{
	printf("Testing 10-print_traingle.c\n");

	printf("5:\n");
	print_triangle(5);
	printf("15:\n");
	print_triangle(15);
	printf("0:\n");
	print_triangle(0);
	printf("-3:\n");
	print_triangle(-3);
	printf("1:\n");
	print_triangle(1);

	printf("\nTest ended\n\n");
}

void test_100()
{
	printf("Testing 100-prime_factor.c\n");
	
	system("gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o _test_100 100-prime_factor.c -lm && _test_100");

	printf("\nTest ended\n\n");
}

void test_101()
{
	printf("Testing 101-print_number.c:\n");

	print_number(0);
	_putchar('\n');
	print_number(INT_MAX);
	_putchar('\n');
	print_number(INT_MIN);
	_putchar('\n');
	print_number(5);
	_putchar('\n');
	print_number(1234);
	_putchar('\n');
	print_number(-5);
	_putchar('\n');
	print_number(-1234);

	printf("\nTest ended\n\n");
}

int main()
{
	test_0();
	test_1();
	test_2();
	test_3();
	test_4();
	test_5();
	test_6();
	test_7();
	test_8();
	test_9();
	test_10();
	test_100();
	test_101();
	return (0);
}