#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: it returns zero at all cost
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 100; x++)
	{
		for (y = 1; y < 100; y++)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar('0' + y / 10);
			putchar('0' + y % 10);
			if (x < 99 || y < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
