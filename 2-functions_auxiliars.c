#include "header.h"
/**
 * count_arg - Count the words of a string
 * @buff_arg: Line of argument
 * Return: Number of Words.
 */
int count_arg(char *buff_arg)
{
	int counter = 1, i = 0;

	while (buff_arg[i] != '\0')
	{
		if (!buff_arg[i])
		{
			return (0);
		}
		else if ((buff_arg[i] == '\t') || (buff_arg[i] == ' '))
		{
			if ((buff_arg[0] != buff_arg[i]) && (buff_arg[i - 1] != '\t'))
				counter++;
			if ((buff_arg[i - 1] != ' ') && (buff_arg[0] != buff_arg[i]))
				counter++;
		}
		i++;
	}
	return (counter);
}
/**
 * count_routes - Counts the number of routes
 * @path: folders containing system executables
 * Return: Number of routes.
 */
int count_routes(char *path)
{
	int number_routes = 0;
	int pos = 0;

	while (path[pos])
	{
		if (path[pos] == ':' || path[pos] == ' ')
		{
			number_routes++;
		}
		pos++;
	}
	return (number_routes + 1);
}
/**
 * _strdup - Duplicate strings
 * @src: string to be duplicated
 * Return: Pointer to the address of the new copy
 */
char *_strdup(char *src)
{
	char *str = NULL, *p = NULL;
	int len = 0;

	while (src[len])
	{
		len++;
	}
	str = malloc(len + 1);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
/**
 * free_doble_pointer - Frees memory spaces allocated by malloc
 * @ptr_to_free: Double pointer to be free
 * Return: void.
 */
void free_doble_pointer(char **ptr_to_free)
{
	int i = 0;

	while (ptr_to_free[i])
	{
		free(ptr_to_free[i]);
		i++;
	}
	free(ptr_to_free);
}
