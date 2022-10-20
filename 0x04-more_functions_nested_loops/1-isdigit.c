/**
 * _isdigit - check if input is between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if its digit, 0 if no
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
