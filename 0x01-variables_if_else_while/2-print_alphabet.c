#include <stdio.h>
/**
 * main - this is the main function
 * Return: this always retuurs zoro
 */
int main(void)
{
	char letter = "a";

	while (letter <= "z")
	{
		putchar(letter);
		letter++;
	}
	putchar("\n");

	return (0);
}
