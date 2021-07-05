#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"  

int _putchar(char c)
{
  return (write(1, &c, 1));
}

int main(void)
{
	char buf[100] = {0};
	char buf2[100] = {0};
	char s1[] = "hellow there";
	char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', 'l', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
	int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
	char *s2 = "Bob Dylan";
    char *s3 = "Robert Allen";
	
	printf("Testing 0\n");
	_memset(buf, 'b', 20);
	buf[25] = '\0';
	printf("buf: %s\n",buf);

	printf("\nTesting 1\n");
	_memset(buf2, '-', 99);
	_memcpy(buf2, buf, 20);
	printf("buf2: %s\n",buf2);

	printf("\nTesting 2\n");
	printf("result: |%s|\n",_strchr(s1, 'l'));
	printf("result: |%s|\n",_strchr(s1, 'z'));

	printf("\nTesting 3\n");
	printf("strspn of s1: %d\n", _strspn(s1, "eloh"));

	printf("\nTesting 4\n");
	printf("result of \"atw\": |%s|\n", _strpbrk(s1, "atw"));
	printf("result of \"zzz\": |%s|\n", _strpbrk(s1, "zzz"));

	printf("\nTesting 5\n");
	printf("result: |%s|\n", _strstr(s1,"w th"));

	printf("\nTesting 6\n");
	print_chessboard(board);

	printf("\nTesting 7\n");
	print_diagsums((int *)c5,5);

	printf("\nTesting 8\n");
	set_string (&s3, s2);
	printf("s1: |%s|  s2: |%s|",s2,s3);

	printf("\nTesting 9\n");
	
	return (0);
}
