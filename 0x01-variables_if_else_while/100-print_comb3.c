#include <stdio.h>
/**
 * main - this is always the main function
 *
 * Return: this function alway return 0 after execution
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8 && y == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}		
