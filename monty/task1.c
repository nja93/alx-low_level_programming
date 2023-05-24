#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "monty.h"
int main (int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	
	FILE *file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file stackbyte.m");
		exit(EXIT_FAILURE);
	}
}
