#include "main.h"

/**
 * print_alphabet - prints the alphabet from a to z in lowercase.
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
		_putchar(let);

	_putchar('\n');
}
