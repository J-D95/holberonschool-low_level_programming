#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * followed by a new line
 * Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
