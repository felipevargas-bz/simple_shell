#include "header.h"
/**
 * 
 * 
 * 
 */
int shell_direc(void)
{
	char **arg_token = NULL;
	struct stat buff;
	char *command = NULL;

	arg_token = argument();

	if (stat(arg_token[0], &buff) == 0)
	{
		command = arg_token[0];
		execute(command, arg_token);
		free_doble_pointer(arg_token);
	}
	else if (stat(arg_token[0], &buff) == -1)
	{
		command = get_command(arg_token);
		if (command != NULL)
		{
			execute(command, arg_token);
			free_doble_pointer(arg_token);
		}
		else
		{
			free_doble_pointer(arg_token);
			perror("Error");
			return (-1);
		}
	}

	return(0);
}
char *get_command(char **arg_token)
{
	char *path = NULL;
	char **path_token = NULL;

	path = get_path();
	path_token = token_path(path);

	return (check_executable(path_token, arg_token));
}