#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is where the program starts executing
 * variable n to be declared
 * Return: This returns (0) after the code has executed
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);

	return (0);
}
