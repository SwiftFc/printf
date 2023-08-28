#include "main.h"

/**
 *  * print_string - a function that loops through a string
 *   * then prints every character
 *    * @y: pointer to be used
 *     * @vi: va_list argument to be used
 *      * By Henry Dade, Henry Danso
 *       * Return: number of characters to be printed
 *        */

int print_string(va_list vi, flags_x *y)
{
	char *s = va_arg(vi, char *);
	int count;

	(void)y;

	if (!s)
		s = "(null)";
	count = _puts(s);

	return (count);
}

/**
 *  * print_char - a function to print characters
 *   * @y: pointer to be used
 *    * @vi: va_list argumets
 *     *
 *      * Return: print number of characters
 *       */

int print_char(va_list vi, flags_x *y)
{
	int count;

	(void)y;
	_putchar(va_arg(vi, int));
	count = 1;

	return (count);
}
