#include "main.h"

/**
 * read_textfile -reads a text file and prints it
 * to the POSIX standard output.
 * @filename: filename.
 * @letters: int.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y, z;
	char *buf;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	y = read(x, buf, letters);
	z = write(STDOUT_FILENO, buf, y);

	close(x);

	free(buf);

	return (z);
}
