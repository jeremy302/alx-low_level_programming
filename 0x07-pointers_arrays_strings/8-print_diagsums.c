#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the diagonals of a
 * @a: an array
 * @size: size of a
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, x_sum = 0, y_sum = 0;

	for (; i < size; ++i)
		x_sum += *(a + (size * i) + (i)),
			y_sum += *(a + (size * i) + (size - i - 1));
	printf("%d, %d\n", x_sum, y_sum);
}
