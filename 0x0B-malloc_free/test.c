#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int i, j;
    int **grid;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    // Allocate memory for the array of pointers to rows
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
    {
        return (NULL);
    }

    // Allocate memory for each row
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            // Free any previously allocated rows in case of failure
            for (j = 0; j < i; j++)
            {
                free(grid[j]);
            }
            free(grid);
            return (NULL);
        }
    }

    // Initialize the grid elements to 0
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }

    return (grid);
}

