#include "main.h"
/**
 * main - prints all the args content
 * @argc: argument count 
 * @argv: argument vector
 *
 * Return: alwys zero
 */

int main(int argc, char *argv[])
{
	int i; 
	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
