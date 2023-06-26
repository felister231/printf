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
 * main - entry point for the main
 * Return:Always 0 (success)
 *
 */

int main(void)
{
	char *name = "Felister Malitu";
	int age = 23;
	char *level = "university";
	double weight = 56.56;

	_printf("My name is %s, I am %d years old\n", name, age);
	_printf(" and I am currently in %s\n", level);
	_printf("Oh, I weigh %.2f. That is some tiny details about me.\n", weight);
	return (0);
}
