#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - print a character
 * @arg: argument list
 * Return: void
 */
void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}

/**
 * print_int - prints an integer
 * @arg: argument list, points to integer
 * Return: void
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - prints a float
 * @arg: argument list pointing to float
 * Return: void
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
 * print_str - prints a string
 * @arg: argument list pointing to  string
 * Return: void
 */
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints everything
 * @format: a list of types of arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, c = 0;
	char *sep = "";
	print_a funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		c = 0;

		while (c < 4 && (*(format + i) != *(funcs[c].sym)))
		c++;

		if (c < 4)
		{
			printf("%s", sep);
			funcs[c].print(args);
			sep = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(args);
}
