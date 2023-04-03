#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int k;

	for (x = 0; x < 8; x++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[x][k]);
		_putchar('\n');
	}
}
