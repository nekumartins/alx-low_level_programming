#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments in program
 * @ac: number of arguments
 * @av: array of strings
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, num = 0;
	char *join;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			num++;
		}
		num++;
	}
	num++;
	join = malloc(sizeof(char) * num);
	if (join == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			join[k] = av[i][j];
			k++;
		}
		join[k] = '\n';
		k++;
	}
	join[k] = '\0';

	return (join);
}
