#include "main.h"

/**
* _putchar - writes the character (character) to stdout
* @character: The character to print
*
* Return: On success 1.
* On error, -1 is returned and errno is set approprietly.
*/
int _putchar(char character)
{
	return (write(1, &character, 1));
}
