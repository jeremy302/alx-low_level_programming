#include <stdlib.h>
#include "holberton.h"

/**
 * 
 * @
 *
 * Return: 
 */
int main(int argc, char **argv)
{
	int len_1 = 0, len_2 = 0, len_r = 0, i, j, k, len_r_tmp, carry = 0, len_tmp;
	char *s1, *s2, *s_tmp, *res, c1, c2, dig_1, dig_2, temp_res, extra = 0, t2 = 0, sig0 = 0;

	if (argc != 3)
		return (!!printf("Error\n") * 98);
	s1 = argv[1], s2 = argv[2];

	for (; s1[len_1] || s2[len_2]; len_1 += c1 != '\0', len_2 += c2 != '\0')
	{
		c1 = s1[len_1], c2 = s2[len_2];
		if ((c1 && (c1 < '0' || c1 > '9')) ||
			((c2 && (c2 < '0' || c2 > '9'))))
			return (printf("Error:|%c|%c|\n",c1,c2), 98);
		dig_1 = c1 ? c1 - '0' : 1, dig_2 = c2 ? c2 - '0' : 1;
		printf("dig_1: %d | dig_2: %d\n",dig_1, dig_2);		
		carry = (dig_1 * dig_2) / 10;
		if (carry)
		{
			printf("carry of: %d",carry);
			if (carry + temp_res >= 10)
				extra = 1;
			temp_res = dig_1 * dig_2;
		}
	}
	extra = 1;//extra;// && len_1 == len_2;
	carry = 0, len_r = len_1 + len_2 + extra;
	res = malloc(sizeof(char) * len_r--);
	printf("len_1: %d | len_2: %d | len_r: %d | extra: %d\n",len_1, len_2, len_r, extra);
	if (res == NULL)
		return (printf("Error\n"), 98);
	len_r_tmp = len_r;
	while (len_r_tmp > 0)
		res[len_r_tmp--] = 0;
	len_tmp = len_1, s_tmp = s1;
	if (len_2 > len_1)
		s1 = s2, s2 = s_tmp, len_1 = len_2, len_2 = len_tmp;
	printf("SORTED: len_1: %d | len_2: %d\n",len_1,len_2);
	for (i = len_2 - 1; i >= 0; i--)
	{
		for (j = len_1 - 1; j >= 0; j--)
		{
			dig_1 = s1[j] - '0', dig_2 = s2[i] - '0';
			temp_res = dig_1 * dig_2 + carry;
			t2 = (temp_res + res[i + j + extra]);
			res[i + j + extra] = (t2 % 10);
			carry = t2 / 10;
			printf("dig_1: %d | dig_2: %d | carry: %d | res: %d | t2: %d | ind: %d\n",dig_1, dig_2, carry, temp_res, t2,  i+j+extra);
		}
		res[i] += carry;
		printf("carry: %d | res[i]: %d",carry, res[i]);
		carry = 0;
		for (k = 0; k < len_r; k++)
			continue;	//printf("|%c|",((char *) res)[k]+'0');
	}
	printf("result: |");
	for (i = 0; i < len_r; i++)
		putchar(res[i]+'0');
	printf("|\n");
	return 0;
	for (; --len_1, --len_2, (len_1 >= 0 || len_2 >= 0);)
	{
		dig_1 = len_1 >= 0 ? s1[len_1] - '0' : 1;
		dig_2 = len_2 >= 0 ? s2[len_2] - '0' : 1;
		printf("dig_1: %d | dig_2: %d\n",dig_1, dig_2);
		temp_res = dig_1 * dig_2 + carry;
		res[--len_r] = (temp_res % 10) + '0';
		carry = temp_res / 10;
	}
	if (extra)
		res[0] = carry + '0';
	sig0 = 0;
	for (; *res; sig0 = sig0 || *res)
		if (*res || sig0)
		putchar('0' + *res++);
	if (!sig0)
		putchar('0');
	putchar('\n');
	return (0);
}
