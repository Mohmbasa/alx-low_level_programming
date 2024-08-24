#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int k;
	int freem;
	int **grid;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < width; k++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			for (freem = 0; freem < k; freem++)
			{
				free(grid[freem]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
