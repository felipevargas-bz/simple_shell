#include "header.h"
/**
 * concat_strings - Concatenates the path with the command
 * @path_token: Tokenized Route
 * @arg_token: Tokenized line of argument
 * Return: Command address the path with command
 */
char *concat_strings(char *path_token, char *arg_token)
{
	char *command = NULL;
	int size = 0;
	int i = 0, concat = 0;

	size = _strlen_command(path_token, arg_token);
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
