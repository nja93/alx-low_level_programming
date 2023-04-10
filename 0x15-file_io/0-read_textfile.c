#include "main.h"
/**
 * read_textfile - fn that reads a text file and prints it to the STDOUT
 * @letters: number of letters it should read and print
 * Return: number of letters it can read and print
 * if the file can not be opened or read, return 0
 * @filename : pointer to the name of the file
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 * by chege
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int chege, length, i, result;
	char *buffer;

	if (filename == NULL)
		return (0); /* check if file is NULL */

	chege = open(filename, O_RDONLY)
 /*open in read only*/
	if (chege == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters); /*allocate memory space for buffer*/
	if (buffer == NULL)
		return (0);


