#include "header.h"
/**
 * 
 * 
 */
char **tok_arg(char *arg, int number_arg)
{
	if (arg == NULL)
	{
		return (NULL);
	}
	char **arg_token = malloc(sizeof(char *) * (number_arg + 1));
	int pos = 0, i = 0;

	while (arg[i] != '\0')
	{
		i++;
	}
	arg[i - 1] = '\0';

	arg_token[pos] = strtok(arg, " ");
	pos++;

	while ((arg_token[pos] = strtok(NULL, " ")))
	{
		pos++;
	}

	return (arg_token);
}
