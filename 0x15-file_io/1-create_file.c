#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file
* @text_content: NULL terminated string
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
	int index, length = 0;

	if (filename == NULL)
		return (-1);
	index = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (index < 0)
		return (-1);

	while (text_content && text_content[length])
		length++;
	if (write(index, text_content, length) < 0)
	{
		close(index);
		return (-1);
	}
	close(index);
	return (1);
}
