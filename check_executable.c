#include "header.h"
/**
 * 
 * 
 */
char *check_executable(char **path_token, char **arg_token)
{
	int i = 0, state;
	char *command = NULL;

		command = concat_path_token_and_arg_token(path_token[i], arg_token[0]);
		state = stat(command, &buff);
		i++;

		while (state != 0 && path_token[i])
		{
			command = concat_path_token_and_arg_token(path_token[i], arg_token[0]);

			state = stat(command, &buff);
			i++;
		}
		if (path_token[i] == NULL)
		{
			printf("Error command not found\n");
		}

	return (command);
}