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
	char *h = NULL;

	number_routes = count_routes(path);
	array_of_token = malloc(sizeof(char *) * (number_routes + 1));

    array_of_token[pos] = _strdup(strtok(path, ": "));
	pos++;

    while (pos < number_routes - 1)
    {
		array_of_token[pos] = _strdup(strtok(NULL, ": "));
		puts(array_of_token[pos]);
		pos++;
    }
	array_of_token[pos] = h;
	free(path);
	return (array_of_token);
}