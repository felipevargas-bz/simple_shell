#include "header.h"
/**
 * 
 * 
 */
char *get_path(void)
{
	char **pointer_environ = NULL;
	int i = 0;
	
	pointer_environ = environ;
	
	while (*pointer_environ)
    {
		if (!_strncmp(*pointer_environ, "PATH", 4)) /**strncmp = 0*/
        {
			i = _strlen(*pointer_environ);
            char *path_environ = (char *)malloc(sizeof(char) * i);
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