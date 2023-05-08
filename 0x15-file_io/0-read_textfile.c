#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file.
 * @letters: the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 * or 0 if the function fails or filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_status;
	char *buffer;
	ssize_t num_bytes_read, num_bytes_written;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_status = open(filename, O_RDONLY);
	if (file_status == -1)
		return (0);

	num_bytes_read = read(file_status, buffer, letters);
	if (num_bytes_read == -1)
	{
		close(num_bytes_read);
		return (0);
	}

	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
	if (num_bytes_written == -1 )
	{
		close(num_bytes_read);
		return (0);
	}

	close(num_bytes_read);
    free(buffer);
	return (num_bytes_written);
}
