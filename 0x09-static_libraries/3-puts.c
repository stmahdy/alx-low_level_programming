#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
