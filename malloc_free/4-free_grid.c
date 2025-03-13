#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function to free up allocated memory
 * @grid: Pointer to the 2D array
 * @height: The height of the array
 *
 * no return type
 */

void free_grid(int **grid, int height)
{
int index = 0;

while (index < height)
{
free(grid[index]);
index++;
}
free(grid);
}
