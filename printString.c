#include "main.h"

/**
* printString - function that prints a string
* @arguments: list of arguments
* Return: the length of the string
*/

int printString(va_list arguments)
{
	int count = 0;
	int index = 0;
	char *string = va_arg(arguments, char*);

	if (string == NULL)
		string = "null";

	for (index = 0; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
		count++;
	}

	return (count);
}
