#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function to return a pointer to a 2D array
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Returns NULL and frees memory if fail
 */

int **alloc_grid(int width, int height)
{
int rows = 0;
int columns = 0;
int **grid;
int index_col;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
while (columns < height)
{
grid[columns] = malloc(width * sizeof(int));
if (grid[columns] == NULL)
{
for (index_col = 0; index_col < columns; index_col++)
{
free(grid[index_col]);
}
free(grid);
return (NULL);
}
while (rows < width)
{
grid[columns][rows] = 0;
rows++;
}
columns++;
rows = 0;
}
return (grid);
}
