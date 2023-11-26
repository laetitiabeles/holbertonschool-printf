#include "main.h"

/**
* getPrint - Matches specifier and returns count
* @nextLetter: char pointer
* Return: selected function
*/

int (*getPrint(const char *nextLetter))(va_list)
{
	specifierStructure_t structureFormat[] = {
		{'c', printCharacter},
		{'s', printString},
		{'%', printPercent},
		{'d', printNumber},
		{'i', printNumber},
		{'\0', NULL}
	};

	int index = 0;

	while (structureFormat[index].format != '\0')
	{
		if (*nextLetter == structureFormat[index].format)
		{
			return (structureFormat[index].function);
		}
		index++;
	}
	return (NULL);
}
