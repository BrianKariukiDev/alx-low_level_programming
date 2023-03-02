/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 * Return: void
 */

int _putchar(int c);
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
