#include "main.h"
#include <stdio.h>
/**
 * print_array - this is a function containig arrays
 * @a: this is a number in this array
 * @n: this is an integer variable
 * Return: this function returns void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(".");
	}
	printf("\n");
}
