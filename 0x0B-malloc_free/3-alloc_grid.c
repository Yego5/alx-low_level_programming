#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. arrap
 */
int **alloc_grid(int width, int height)
{
	int **pntr;
	int k, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	pntr = malloc(sizeof(int *) * height);

	if (pntr == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		pntr[k] = malloc(sizeof(int) * width);

		if (pntr[k] == NULL)
		{
			for (; k >= 0; k--)
				free(pntr[k]);

			free(pntr);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (p = 0; p < width; p++)
			pntr[k][p] = 0;
	}

	return (pntr);
}
