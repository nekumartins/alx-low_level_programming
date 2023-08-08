#include "main.h"
#include <stdio.h>

int err_close(int num);
void err_read(char *filename);
void err_write(char *filename);

/**
* main - copies the content of a file to another file
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	char page[1024];
	int input_file, output_file;
	ssize_t bytecount = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input_file = open(argv[1], O_RDONLY);
	if (input_file < 0)
	{
		err_read(argv[1]);
		exit(98);
	}
	output_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output_file < 0)
	{
		err_write(argv[2]);
		err_close(input_file);
		exit(99);
	}

	while (bytecount)
	{
		bytecount = read(input_file, page, 1024);
		if (bytecount < 0)
		{
			err_read(argv[1]);
			err_close(input_file);
			err_close(output_file);
			exit(98);
		}
		if (bytecount == 0)
			break;
		bytecount = write(output_file, page, bytecount);
		if (bytecount < 0)
		{
			err_write(argv[2]);
			err_close(input_file);
			err_close(output_file);
			exit(99);
		}
	}

	if (err_close(input_file) < 0)
	{
		err_close(output_file);
		exit(100);
	}
	if (err_close(output_file) < 0)
		exit(100);
	return (0);
}

/**
 * err_close - close a file descriptor and check for a possible error
 * @fd: file descriptor for file to be closed
 * Return: 1
 */

int err_close(int num)
{
	int output;

	output = close(num);
	if (output < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", num);
	return (output);
}

/**
 * err_read - print the read error.
 * @filename: filename.
 */

void err_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

/**
 * err_write - print the write error.
 * @filename: filename.
 */

void err_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}
