#include "main.h"
#include <stdlib.h>

/**
 * gridFree- frees memory for array.
 * @grid: 2D char array.
 * @height: height of the array.
 *
 * Return: void
 */
void gridFree(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer to an array of integers
 */
char **strtow(char *str)
{
	char **words;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	words = malloc((height + 1) * sizeof(char *));
	if (words == NULL || height == 0)
	{
		free(words);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[i] = malloc((c - k + 2) * sizeof(char));
				if (words[i] == NULL)
				{
					gridFree(words, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			words[i][j] = str[k];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
