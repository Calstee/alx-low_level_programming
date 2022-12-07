#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabet in lowercase
 * Return: 0 (success).
 */

void print_alphabet(void)
{
	char starts;

	for (starts = 'a'; starts <= 'z'; starts++)
	{
		_putchar(starts);
	}
	_putchar('\n');
}
