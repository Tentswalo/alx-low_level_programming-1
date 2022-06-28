#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns pointer to a 2-D array of intergers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to array if success,
 * NULL if width or height is 0 or if failure.
 */

int **alloc_grid(int width, int height)
{
	if ((width == 0) || (height == 0))
	{
		return (NULL);
	}
	else
	{
		int i;
		int **arr = malloc(sizeof(int) * (height));

		for (i = 0; i < width; i++)
		{
			arr[i] = malloc(sizeof(int) * width);
		}

		if (arr != NULL)
		{
			int i, j;

			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}
			}

			return (arr);
		}
		else
		{
			return (NULL);
		}
	}
}
