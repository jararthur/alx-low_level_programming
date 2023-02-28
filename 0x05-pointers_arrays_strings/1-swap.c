#include "main.h"
/**
 * swap_int - this is the swap function
 * @a: this is one of the attributes
 * @b: this is the second attributte to the swap function
 * Return: thos function does not return anything its void
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}

