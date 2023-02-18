#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - This is the place the program start execution
 * variable n is positive or negative
 * Return: This return 0 at the finish line
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
