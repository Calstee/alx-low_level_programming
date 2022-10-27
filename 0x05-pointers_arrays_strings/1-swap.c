#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 *@a: swaps int
 *@b: swaps int
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int i = *a;

	*a = *b;
	*b = i;
}
