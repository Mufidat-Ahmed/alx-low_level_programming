#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: int to be raised to be raised to he power y
 * @y: int to be used
 * Return: new value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
