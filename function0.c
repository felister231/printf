#include "main.h"

/**
 * _printf - produces output according to a format
 * @format:is a character string
 * Return: the number of characters printed
 *
 * Description:excluding the null byte used to end output to strings
 */

int _printf(const char *format, ...) /* the prototype */
{
	int i;
	va_list myCharacter; /* the intialization of the varible */

	if (format == NULL) /* checks whether the format string is null */
	{
		return (-1);
	}
	va_start(myCharacter, format);
	i = vprintf(format, myCharacter);

	va_end(myCharacter);

	return (i);
}
