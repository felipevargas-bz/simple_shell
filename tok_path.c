#include "header.h"
/**
 * 
 * 
 * 
 */
char **token_path(char *path)
{
	int number_routes = 0, pos = 0;
	char **array_of_token = NULL;

	number_routes = count_routes(path);
	array_of_token = malloc(sizeof(char *) * (number_routes + 1));

    array_of_token[pos] = strtok(path, ": ");

    while ((array_of_token[pos] = strtok(NULL, ": ")))
    {
		pos++;
    }
	return (array_of_token);
}