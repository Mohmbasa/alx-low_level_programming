/**
 * _pow_recursion - computes the power of a number
 * @x: the number
 * @y: the power of the number
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			i = x * _pow_recursion(x, y - 1);
		}
	}
	return (i);
}
