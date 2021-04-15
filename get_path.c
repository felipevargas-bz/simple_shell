#include "header.h"
/**
 * get_path - Gets the path of the environ
 * Return: Path
 */
char *get_path(void)
{
	char **pointer_environ = NULL;
	char *path_environ = NULL;
	int i = 0;

	pointer_environ = environ;

	while (*pointer_environ)
	{
		if (!_strncmp(*pointer_environ, "PATH", 4))
		{
			i = _strlen(*pointer_environ);
			path_environ = (char *)malloc(sizeof(char) * (i + 1));

			if (path_environ == NULL)
			{
				perror("Error on Path:\n");
				return (NULL);
			}
			_strcpy(path_environ, *pointer_environ);
			return (not_path(path_environ));
		}
		pointer_environ++;
	}
	return (NULL);
}
