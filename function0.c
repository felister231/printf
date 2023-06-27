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

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	
	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	_printf("Len:[%d]\n", len);
	_printf("Unknown:[%r]\n");

	return (0);
}
