#include "main.h"
#include <stdio.h>

/**
 * printing a string in reverse
 * string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
