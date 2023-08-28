#include "main.h"

/*
* get_flag - a function that turns on flags if
* _printf finds a flag modifier in format string
* @y: pointer to the struct flags to be used
* @s: character specifier to be used
* By Henry Dade and Henry Danso
* Return: 1 if flag works, 0 otherwise
*/

int get_flag(char s, flags_x *y)
{
	int w = 0;

	switch (s)
	{
		case '+':
			y->plus = 1;
			w = 1;
			break;
		case ' ':
			y->space = 1;
			w = 1;
			break;
		case '#':
			y->hash = 1;
			w = 1;
			break;
		case '-':
			y->hash = 1;
			w = 1;
			break;
		case '0':
			y->hash = 1;
			w = 1;
			break;
	}

	return (w);
}
