#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX std-output
* @filename: the file to read
* @letters: number of letters to read and print
* Return: number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int index = -1;
	ssize_t out = 0;
	char *page;

	if (filename == NULL)
		return (0);

	index = open(filename, O_RDONLY);
	if (index < 0)
		return (0);

	page = malloc(sizeof(char) * letters);
	if (page == NULL)
	{
		close(index);
		return (0);
	}

	out = read(index, page, letters);
	if (out < 0)
	{
		free(page);
		close(index);
		return (0);
	}

	out = write(STDOUT_FILENO, page, out);
	free(page);
	close(index);
	if (out < 0)
		return (0);
	return (out);
}
