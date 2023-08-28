#include "main.h"

/**
 *  * get_width - gets the width from the format string
 *   * @s: the format string
 *    * @flags: the parameters struct
 *     * @ap: the argument pointer
 *      *
 *       * Return: new pointer
 *        */

char *get_width(char *s, flags_x *flags, va_list ap)
	/* should this function use char **s and modify the pointer? */
{
	int d = 0;

	if (*s == '*')
	{
		d = va_arg(ap, int);
		s++;
	}
	else
	{
		while (count_digit(*s))
			d = d * 10 + (*s++ - '0');
	}
	flags->width = d;
	return (s);
}

/**
 *  * get_precision - gets the precision from the format string
 *   * @p: the format string
 *    * @flags: the parameters struct
 *     * @ap: the argument pointer
 *      *
 *       * Return: new pointer
 *        */

char *get_precision(char *p, flags_x *flags, va_list ap)
{
	int d = 0;

	if (*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		d = va_arg(ap, int);
		p++;
	}
	else
	{
		while (count_digit(*p))
			d = d * 10 + (*p++ - '0');
	}
	flags->precision = d;
	return (p);
}

/**
 *  * get_modifier - finds the modifier func
 *   * @s: the format string
 *    * @flags: the parameters struct
 *     *
 *      * Return: if modifier was valid
 *       */

int get_modifier(char *s, flags_x *flags)
{
	int w = 0;

	switch (*s)
	{
		case 'h':
			w = flags->h_modifier = 1;
			break;
		case 'l':
			w = flags->l_modifier = 1;
			break;
	}
	return (w);
}
