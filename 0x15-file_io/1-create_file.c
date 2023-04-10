#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * where filename is the name of the file to create and
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failurei
 * .. (file can not be created, file can not be written, write “fails”,
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * by chege
 */
int create_file(const char *filename, char *text_content)
{
	int chege, status, length;

	if (filename == NULL)
		return (-1);
/* create file if nonexistent, then truncte */
	chege = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (chege == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	length = strlen(text_content);

	status = write(chege, text_content, length);
	if (status != length)
		return (-1);

	status = close(chege);
	return (1);
}
