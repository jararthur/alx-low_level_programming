#include <stdio.h>
/**
 * main - this is the function called main
 *
 * Return: this function returns o at the end of running the code
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
