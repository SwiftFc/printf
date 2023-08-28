#include "main.h"

/**
 *  * print_bigS - a function to check Non-printable characters
 *   * (0 < ASCII value < 32 or >= 127) are
 *    * printed this way: \x, followed by the ASCII code
 *     * value in hexadecimal (uppercase - always 2 characters)
 *      * @vi: va_list arguments
 *       * @y: pointer to be used
 *        * Return: number of characters to be printed
 *         */

int print_bigS(va_list vi, flags_x *y)
{
	int w, count = 0;
	char *res;
	char *s = va_arg(vi, char *);

	(void)y;
	if (!s)
		return (_puts("(null)"));

	for (w = 0; s[w]; w++)
	{
		if (s[w] > 0 && (s[w] < 32 || s[w] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[w], 16, 0);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[w]);
	}
	return (count);
}

/**
 *  * print_rev - prints a string in reverse
 *   * @vi: argument from _printf
 *    * @y: pointer to the struct flags
 *     * Return: length of the printed string
 *      */

int print_rev(va_list vi, flags_x *y)
{
	int w = 0, j;
	char *s = va_arg(vi, char *);

	(void)y;
	if (!s)
		s = "(null)";

	while (s[w])
		w++;

	for (j = w - 1; j >= 0; j--)
		_putchar(s[j]);

	return (w);
}

/**
 *  * print_rot13 - prints a string using rot13
 *   * @vi: list of arguments from _printf
 *    * @y: pointer to the struct flags
 *     * Return: length of the printed string
 *      */

int print_rot13(va_list vi, flags_x *y)
{
	int w, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(vi, char *);

	(void)y;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (w = 0; w <= 52; w++)
			{
				if (s[j] == rot13[w])
					_putchar(ROT13[w]);
			}
		}
	}

	return (j);
}

/**
 *  * print_percent - prints a percent
 *   * @vi: va_list arguments from _printf
 *    * @y: pointer to the struct flags in which we turn the flags on
 *     * Return: number of characters printed
 *      */

int print_percent(va_list vi, flags_x *y)
{
	(void)vi;
	(void)y;
	return (_putchar('%'));
}
