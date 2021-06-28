#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"  

int _putchar(char c)
{
  return (write(1, &c, 1));
}
int checksum(char *str)
{
	int sum = 0;
	while (*str != '\0')
		sum+=*str++;
	return sum;
}
int main(void)
{
	int n = 50, a = 10, b = 20;
	char str[]="abcd", str_1[] = "test string";
	char str_2[20];
	int arr[] = {1, 2, 3, 4, 5};
	
	printf("\nTesting 0-reset_to_98.c\n");
	printf("n before call: %d\n", n);
	reset_to_98(&n);
	printf("n after call: %d", n);
	printf("\nTest ended\n");

	printf("\nTesting 1-swap.c\n");
	printf("variables before call: a: %d  b: %d\n", a, b);
	swap_int(&a, &b);
	printf("variables after call: a: %d  b: %d", a, b);
	printf("\nTest ended\n");

	printf("\nTesting 2-strlen.c\n");
    printf("length of 'abc': %d\nlength of '': %d",
		   _strlen("abc"),_strlen(""));
	printf("\nTest ended\n");

	printf("\nTesting 3-puts.c\n");
	printf("putting 'abc': \n|");
	_puts("abc");
	printf("|");
	printf("\nputting '': \n|");
	_puts("");
	printf("|");
	printf("\nTest ended\n");

	printf("\nTesting 4-print_rev\n");
	printf("printing 'abcd'\n");print_rev("abcd");
	printf("\nprinting ''");print_rev("");
	printf("\nTest ended\n");

	printf("\nTesting 5-rev_string.c\n");
	printf("str before: %s\n", str);
	rev_string(str);
	printf("str after: %s", str);
	printf("\nTest ended\n");

	printf("\nTesting 6-puts2.c\n");
	printf("putting 'abcd': \n");puts2("abcd");
	printf("\nputting 'abcde': \n");puts2("abcde");
	printf("\nputting '': ");puts2("");
	printf("\nTest ended\n");

	printf("\nTesting 7-puts_half.c\n");
	printf("putting half of 'abcd': \n"); puts_half("abcd");
	printf("\nputting half of 'abcde': \n"); puts_half("abcde");
	printf("\nputting half of '': "); puts_half("");
	printf("\nTest ended\n");

	printf("\nTesting 8-print_array.c\n");
	printf("printing 0 to 3 of arr: \n");
	print_array(arr, 3);
	printf("printing 0 to 0 of arr: ");
	print_array(arr, 0);
	printf("\nTest ended\n");

	printf("\nTesting 9-strcpy.c\n");
	printf("copying str_1 to str_2\n");
	_strcpy(str_2, str_1);
	printf("str_1: |%s|\nstr_2: |%s|", str_1, str_2);
	printf("\nTest ended\n");

	printf("\nTesting 100-atoi.c\n");
	printf("'+-+- 90': %d\n", _atoi("+-+- 90"));
	printf("'': %d\n", _atoi(""));
	printf("'-2147483648': %d\n", _atoi("-2147483648"));
	printf("'+1-2': %d", _atoi("+1-2"));
	printf("\nTest ended\n");

	printf("Testing 101-keygen.c\n");
	printf("Generated key: ");
	system("gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o _test_101 && _test_101");
	printf("\nTest ended\n");
	
	return 0;
	
}
