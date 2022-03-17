#include "main.h"
/**
 *print_times_table - Function that prints the n times table,
 * starting with 0
 * @n: number times table (0 < n <= 15 )
 * Return: No return if n > 15
 */
void print_times_table(int n)
{
	int a, b, ab;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				ab = a * b;
				_putchar(44);
				_putchar(32);
				if (ab <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(ab + 48);
				}
				else if	(ab <= 99)
				{
					_putchar(32);
					_putchar((ab / 10) + 48);
					_putchar((ab % 10) + 48);
				}
				else
				{
					_putchar(((ab / 100) % 10) + 48);
					_putchar(((ab / 10) % 10) + 48);
					_putchar((ab % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

