#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: A pointer that points to a pointer
 * @to: pointer containg value
 */

void set_string(char **s, char *to)
{
	**s = *to;
}
