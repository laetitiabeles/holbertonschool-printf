#include "main.h"
/**
* _printf - prints a string, char, or anything else in stdout
* @format: input string
* Return: an integer (output length)
*/
int _printf(const char *format, ...)
{
	/* unsigned int length = 0; */
	int indexCount = 0;
	int (*function)(va_list);
	/* declares the variadic list called arguments*/
	va_list arguments;
	/* initializes variadic with 2 parameters*/
	va_start(arguments, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			indexCount++;
		}
		else
		{
			format++;
			function = getPrint(format);

			if (function)
			{
				indexCount += function(arguments);
			}
			else
			{
				_putchar(*format);
				indexCount += 2;
			}
		}
		format++;
	}
	va_end(arguments);
	return (indexCount);
}
