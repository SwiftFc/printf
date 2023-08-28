#include "main.h"

/**
 *  * print_address - a function that prints the address
 *   * of input in hexadecimal
 *    * @y: pointer to the struct to be used
 *     * @vi: va_list argument to be used
 *      * By Henry Dade and Henry Danso
 *       * Return: number of characters to be printed
 *        */

int print_address(va_list vi, flags_x *y)
{
	char *str;
	unsigned long int p = va_arg(vi, unsigned long int);

	register int count = 0;

	(void)y;

	if (!p)
		return (_puts("(nil)"));

	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);

	return (count);
}
