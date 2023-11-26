#ifndef MAIN_H_
#define MAIN_H_

/* Libraries we used */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <ctype.h>

/* Data Structures */

/**
* struct specifierStructure - associates a character with a function
* @format: the character to the function
* @function: pointer to associated function
*
* Description: Structure maps a character (specifier) to its
* corresponding function.
*/
typedef struct specifierStructure
{
	char format;
	int (*function)(va_list);
} specifierStructure_t;

/* Function Prototypes called in _Printf */
int _printf(const char *format, ...);
int _putchar(char character);
int printString(va_list arguments);
int printCharacter(va_list arguments);
int printPercent(va_list arguments);
int printNumber(va_list arguments);

int (*getPrint(const char *nextLetter))(va_list);

#endif /* MAIN_H_ */
