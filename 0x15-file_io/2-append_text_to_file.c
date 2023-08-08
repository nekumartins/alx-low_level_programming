#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: the NULL terminated string
* Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int index, length = 0;

	if (filename == NULL)
		return (-1);
	index = open(filename, O_RDWR | O_APPEND);
	if (index < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(index);
		return (1);
	}

	while (text_content[length])
		length++;
	if (write(index, text_content, length) < 0)
	{
		close(index);
		return (-1);
	}
	close(index);
	return (1);
}