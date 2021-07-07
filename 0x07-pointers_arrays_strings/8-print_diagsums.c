#include "holberton.h"

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

	 while (i < size)
		 x_sum += a[size - i][size - i], y_sum += a[i][size - i];
	 printf("%d, %d", x_sum, y_sum);
 }
