#include "main.h"
/**
 * read_textfile - check the code
 * @filename : name of the file
 * @letters: letter legnth
 * Return: bytes_written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char buffer[letters + 1];
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read < 0)
	{
		fclose(fp);
		return (0);
	}
	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < bytes_read)
	{
		fclose(fp);
		return (0);
	}
	fclose(fp);
	return (bytes_written);
}
