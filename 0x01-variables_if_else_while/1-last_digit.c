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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of n is", n);
	int last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	} else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);
	} else
	{
		printf("%d and is less than 6 and not 0\n", last_di

	return (0);
}
