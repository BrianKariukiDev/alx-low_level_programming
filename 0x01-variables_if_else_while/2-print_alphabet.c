#include <stdio.h>

/**
 * main-a program to output a-z
 * Return: 0(Success)
 */

int main(void)
{
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i <= 26; i++)
	{
		putchar (alphabet[i]);
	}
	return (0);
}
