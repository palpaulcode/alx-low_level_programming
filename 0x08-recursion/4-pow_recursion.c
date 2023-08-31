/**
 * _pow_recursion - returns the value of 'x' raised to the power of 'y'
 * @x: value to raise to power 'y'
 * @y: power to raise 'x' by
 *
 * Return: result of raising 'x' to power 'y'
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
