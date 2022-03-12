#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chk;

	for (chk = 'a'; chk <= 'z'; chk++)
	{
		putchar(chk);
	}
	putchar('\n');
	return (0);
}
