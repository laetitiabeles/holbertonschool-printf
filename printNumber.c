#include "main.h"

/**
* _putNumber - Recursive function that prints an integer
* @number: The integer to be printed
*/

void _putNumber(int number)
{
	/* Check if the number is negative */
	if (number < 0)
	{
		_putchar('-'); /* Print the negative sign */
		number = -number; /* Make the number positive for further processing */
	}

	/* Recursively call _putNumber to print each digit */
	if (number / 10)
		_putNumber(number / 10);

	/* Print the last digit */
	_putchar(number % 10 + '0');
}

/**
* _countNumber - Counter function to determine the length of an integer
* @number: The integer to be counted
* Return: The length of the integer
*/

int _countNumber(int number)
{
	int count = 0;

	/* Special case for zero */
	if (number == 0)
		return (1);

	/* Count the number of digits using a loop */
	while (number != 0)
	{
		number = number / 10; /* Move to the next digit */
		count++; /* Increment the count */
	}

	return (count);
}

/**
* printNumber - Function that prints integers
* @arguments: List of variadic arguments
* Return: The length of the printed number
*/
int printNumber(va_list arguments)
{
	int number = va_arg(arguments, int); /* Extract the integer argument */

	_putNumber(number); /* Print the number */
	return (_countNumber(number)); /* Return the length of the number */
}
