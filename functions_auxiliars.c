#include "header.h"
/**
 * 
 * 
 */
int _strlen(char *str)
{
	int len = 0;
	
	if (str == NULL)
	{
		return (0);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
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
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int _strncmp(char *s1, char *s2, size_t n)
{
	while ( n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
    }
	if (n == 0)
		return (0);
	else
	{
		return (*(char *)s1 - *(char *)s2);
	}
}
int _strlen_command(char *path_token, char *arg_token)
{
	int total_size = 0;
	
	total_size += _strlen(path_token);
	total_size += _strlen(arg_token);
	
	return (total_size + 2);
}
