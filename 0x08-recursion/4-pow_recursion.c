#include "main.h"
/**
 * _pow_recursion - function that returns the value x to the power y
 * @x: value to be raised
 * @y: power of the raised value
 *
 * Return: the result of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
