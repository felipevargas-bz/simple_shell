#include "header.h"
/**
 * 
 * 
 */
char **tok_path(char *path, int number_routes)
{
	char **array_of_token = malloc(sizeof(char *) * (number_routes + 1));
	int pos = 0;
	array_of_token[pos] = strtok(path, ": ");

	while ((array_of_token[pos] = strtok(NULL, ": ")))
	{
		pos++;
	}

	return (array_of_token);
}
