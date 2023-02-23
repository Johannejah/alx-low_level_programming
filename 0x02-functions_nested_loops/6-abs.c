#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: always c
 */

int _abs(int c)

{

	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return (c);
}
