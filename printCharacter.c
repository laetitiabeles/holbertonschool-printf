#include "main.h"

/**
* printCharacter - function that prints character
* @arguments: list of arguments
* Return: the length
*/

int printCharacter(va_list arguments)
{
	char character;

	character = va_arg(arguments, int);

	_putchar(character);
	return (1);
}
