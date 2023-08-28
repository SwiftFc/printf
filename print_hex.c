#include "main.h"

/**
 *  * print_hex - a fuction that prints a number in
 *   * hexadecimal base in lowercase
 *    * @y: pointer to to be used
 *     * @vi: va_list argument
 *      * By Henry Dade, Henry Danso
 *       * Return: number of characters to be printed
 *        */

int print_hex(va_list vi, flags_x *y)
{
	unsigned int num = va_arg(vi, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (y->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);

	return (count);
}

/**
 *  * print_hex_big - a function to print a number
 *   * in hexadecimal base in uppercase
 *    * @y: pointer to be used
 *     * @vi: va_list arguments
 *      *
 *       * Return: number of characters
 *        */

int print_hex_big(va_list vi, flags_x *y)
{
	int count = 0;
	unsigned int num = va_arg(vi, unsigned int);
	char *str = convert(num, 16, 0);

	if (y->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);

	return (count);
}

/**
 *  * print_binary - a function that prints number in base 2
 *   * @y: pointer to be used
 *    * @vi: va_list arguments
 *     *
 *      * Return: number of characters to be printed
 *       */

int print_binary(va_list vi, flags_x *y)
{
	unsigned int num = va_arg(vi, unsigned int);
	char *str = convert(num, 2, 0);

	(void)y;

	return (_puts(str));
}

/**
 *  * print_octal - a function that prints a number in base 8
 *   * @y: pointer to be used
 *    * @vi: va_list arguments
 *     *
 *      * Return: number of characters to be printed
 *       */

int print_octal(va_list vi, flags_x *y)
{
	unsigned int num = va_arg(vi, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (y->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);

	return (count);
}
