#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
