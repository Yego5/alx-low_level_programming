#include "main.h"
#include <stdlib.h>
/**
 * aloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **aloc_grid(int width, int height)
{
	int **me;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	me = malloc(sizeof(int *) * height);

	if (me == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		me[n] = malloc(sizeof(int) * width);

		if (me[n] == NULL)
		{
			for (; n >= 0; n--)
				free(me[n]);

			free(me);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			me[n][m] = 0;
	}

	return (me);
}
