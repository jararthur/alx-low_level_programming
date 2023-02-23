#include "main.h"
/**
 * print_last_digit - this is the main function to call
 * @n: this is an int function i am calling
 *
 * Return: this value returns the value last digit
 * Write a function that prints the last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}
	last_digit =(n % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}
