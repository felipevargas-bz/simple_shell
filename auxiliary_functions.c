#include "header.h"
/**
 * count_routes - count number of routes.
 * @path: path not tokenizer.
 * Return: number o routes.
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
/**
 * 
 * 
 * 
 */
short int count_arg(char *arg)
{
	int counter = 1, i = 0;

	while (arg[i] != '\0')
	{
		if (!arg[i])
        {
                return (0);
        }
        else if ((arg[i] == '\t') || (arg[i] == ' ') || (arg[i] == '\n'))
        {
                if ((arg[0] != arg[i]) && (arg[i -1] != '\t') && (arg[i -1] != ' ') && (arg[i -1] != '\n'))
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
char *concat_path_token_and_arg_token(char *path_token, char *arg_token)
{
	char *command;
	int size = _strlen_command(path_token, arg_token);
	int i = 0, concat = 0;

	command = malloc(sizeof(char) * size);

	while (path_token[i] != '\0')
	{
		command[concat] = path_token[i];
		i++;
		concat++;
	}
	command[concat] = '/';
	i = 0;
	concat++;
	while (arg_token[i] != '\0')
	{
		command[concat] = arg_token[i];
		i++;
		concat++;
	}
	return (command);
}
/**
 * 
 * 
 * 
 */
int _strlen_command(char *path_token, char *arg_token)
{
	int size = 0;
	int total_size = 0;

	while (path_token[size] != '\0')
	{
		size++;
		total_size++;
	}
	size = 0;
	while (arg_token[size] != '\0')
	{
		size++;
		total_size++;
	}

	return (total_size + 2);
}
