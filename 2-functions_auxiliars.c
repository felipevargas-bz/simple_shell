#include "header.h"
/**
 * 
 * 
 * 
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
			if ((buff_arg[0] != buff_arg[i]) && (buff_arg[i -1] != '\t') && (buff_arg[i -1] != ' '))
				counter++;
		}
		i++;
	}
	return (counter);
}
/**
 * 
 * 
 * 
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
	return (number_routes);
}
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