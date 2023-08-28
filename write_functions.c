#include "main.h"
#include <unistd.h>

/**
 *  * _putchar - a function to write
 *   *  the character c to stdout
 *    * @c: The character to print
 *     * Return: On success 1.
 *      *         On error, -1 is returned, and errno is set appropriately.
 *       * Description: _putchar uses a local buffer of 1024 to call write
 *        * as little as possible.
 *         */

int _putchar(char c)
{
	static char buf[1024];
	static int y;

	if (c == -1 || y >= 1024)
	{
		write(1, buf, y);
		y = 0;
	}
	if (c != -1)
	{
		buf[y] = c;
		y++;
	}
	return (1);
}

/**
 *  * _puts - a function to prints a string to stdout
 *   * @str: pointer to the string to used
 *    * Return: number of characters written
 *     */

int _puts(char *str)
{
	register int y;

	for (y = 0; str[y] != '\0'; y++)
		_putchar(str[y]);
	return (y);
}
