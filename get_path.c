#include "header.h"
/**
 * 
 * 
 */
char *get_path(void)
{
	char **pointer_environ = environ;
		int i = 0;

	while (*pointer_environ)
	{
		if (!strncmp(*pointer_environ, "PATH", 4)) /**strncmp = 0*/
		{
			i = strlen(*pointer_environ);
			char *path_environ = (char *)malloc(sizeof(char) * i);

			if (path_environ == NULL)
			{
				perror("Error on Path:\n");
				return (NULL);
			}
			strcpy(path_environ, *pointer_environ);

			return (not_path(path_environ));
		}
		pointer_environ++;
	}

	return (NULL);
}
char *not_path(char *path_environ)
{
	char *path = NULL;
	int index = 0, iterator = 0;

	while (path_environ[index] != '\0')
	{
		index++;
	}
	path = malloc(sizeof(char) * (index + 1));
	index = 5;
	while (path_environ[index] != '\0')
	{
		path[iterator] = path_environ[index];
		index++;
		iterator++;
	}
	free(path_environ);

	return (path);
}