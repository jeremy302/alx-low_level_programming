#include "holberton.h"

/**
 * infinite_add - adds n1 and n2 into r if the size of
 * @n1: a positive/zero integer
 * @n2: a positive/zero integer
 * @r: array to store result in
 * @size_r: size of r
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	register char rev_tmp, *r_tmp = r, carry = 0, n1_t, n2_t, n_sum, n1_d, n2_d;
	register int i, len, n1_len = 0, n2_len = 0;

	while (n1_t = *n1 != 0, n2_t = *n2 != 0, n1 += n1_t, n2 += n2_t, n1_t + n2_t)
		n1_len += n1_t, n2_len += n2_t;
	len = n1_len > n2_len ? n1_len : n2_len;
	if (size_r <= len)
		return (0);
	while (n1_len > 0 || n2_len  > 0)
	{
		n1_d = n1_len-- > 0 ? *--n1 - '0' : 0;
		n2_d = n2_len-- > 0 ? *--n2 - '0' : 0;
		n_sum = n1_d + n2_d + carry;
		*r++ = (n_sum % 10) + '0';
		carry = n_sum / 10;
	}
	len += (carry != 0);
	if (size_r - 1 <= len)
		return (0);
	if (carry)
		*r++ = carry + '0';
	*r = '\0', r = r_tmp;
	for (i = 0; i < len / 2; i++)
		rev_tmp = r[i], r[i] = r[len - i - 1], r[len - i - 1] = rev_tmp;
	return (r_tmp);
}
