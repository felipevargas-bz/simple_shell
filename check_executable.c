#include "header.h"
/**
 * check_executable - Checks if the string is executable
 * @path_token: Path tokenized
 * @arg_token: Arguments tokenized
 * Return: Command executable
 */
char *check_executable(char **path_token, char **arg_token)
{
	int i = 0, state = 0;
	char *command = NULL;
	struct stat buff;

	command = concat_strings(path_token[i], arg_token[0]);
	state = stat(command, &buff);
	i++;
	while (state != 0 && path_token[i])
	{
		command = concat_strings(path_token[i], arg_token[0]);
		state = stat(command, &buff);
		if (state != 0)
		{
			free(command);
		}
		i++;
	}
	if (path_token[i] == NULL)
	{
		free_doble_pointer(path_token);
		printf("Error command not found\n");
		return (NULL);
	}
	free_doble_pointer(path_token);

	return (command);
}
