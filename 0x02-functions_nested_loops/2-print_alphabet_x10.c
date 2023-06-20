#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: 0 on success.
 */

void print_alphabet_x10(void)
{
	int temp;
	char let;

	for (temp = 0 ; temp < 10 ; temp++)
	{
		for (let = 'a' ; let <=  'z' ; let++)
		{
                        _putchar(let);        
		}
		_putchar('\n');       
	}
}
