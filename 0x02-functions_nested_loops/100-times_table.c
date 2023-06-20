#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number parameter
 */

void print_times_table(int n)
{
	int rows, columns, product;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		rows = 0;
		while (rows < n)
		{
			columns = 0;
			while (columns < n)
			{
				product = rows * columns;
				if (columns == 0)
					_putchar('0' + product);
				else
				{
					_putchar(','), _putchar(' ');
					if (product <= 9)
					{
						_putchar(' '), _putchar(' '), _putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' '), _putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 10) % 10)), _putchar('0' + (product % 10));
					}
				}
				columns++;
			}
			rows++, _putchar('\n');
		}
	}
}
