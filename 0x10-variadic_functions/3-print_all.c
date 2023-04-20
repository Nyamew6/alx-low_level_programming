#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a char
 * @arg: a list of arguments pointing to
 *	character to be printed
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - prints an int
 * @arg: a list of arguments pointing to
 *	character to be printed
 */

void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - prints a float
 * @arg: a list of arguments pointing to
 *	character to be printed
 */

void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - prints a string
 * @arg: a list of arguments pointing to
 *	character to be printed
 */

void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}


/**
 * print_all - a function that prints anything.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *		r char * is ignored.
 *		If a string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
