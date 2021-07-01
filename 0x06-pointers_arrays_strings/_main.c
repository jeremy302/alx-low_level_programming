#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"  

int _putchar(char c)
{
  return (write(1, &c, 1));
}

int main()
{
	char str1[100] = "hello there\0";
	char str2[100] = " abc\0";
	char str3[100] = "Hello the_r;e";
	char sleet[100] = "Hello leet";
	char srot[100] = "aBc,. .,xYz";
	char r[1000];
	char buffer[]="This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";
	
	int iarr[5] = {1, 3, 5, 7, 9};
	puts("Testing 0");
	_strcat(str1, str2);
	printf("dest: |%s|\n", str1);

	puts("Testing 1");
	_strncat(str1, str2,2);
	printf("dest: |%s|\n",str1);

	puts("Testing 2");
	_strncpy(str1,str2,3);
	printf("dest: |%s|\n",str1);

	puts("Testing 3");
	printf("diff: %d\n",_strcmp("abc","abd"));

	puts("Testing 4");
	reverse_array(iarr,5);
	printf("iarr[0]: %d | iarr[2]: %d | iarr[4]: %d\n",iarr[0],iarr[2],iarr[4]);

	puts("Testing 5");
	printf("str1: |%s|\n",string_toupper(str1));

	puts("Testing 6");
	printf("str3: |%s|\n",cap_string(str3));

	puts("Testing 7");
	printf("hello leet: %s\n",leet(sleet));

	puts("Testing 100");
	printf("|%s|\n",rot13(srot));

	puts("Testing 101");
	print_number(-21234);
	putchar(' ');
	print_number(0);
	printf("\n");
	{
		char n1[] = "99999999", n2[]="1111111113339999999999900001000";
		puts("Testing 103");
		infinite_add(n1, n2,r,sizeof(r));
		printf(" %s + %s = |%s|\n", n1, n2, r);
	}
	puts("Testing 104");
	print_buffer(buffer,sizeof(buffer));
	
	return (0);
}
