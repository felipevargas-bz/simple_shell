#include "header.h"
/**
 * 
 * 
 * 
 */
void shell_direc(void)
{
	char **arg_token = NULL;
	struct stat buff;

	arg_token = argument();

	if (stat(arg_token[0], &buff) == 0)
	{
		execute(arg_token);
		free(arg_token);
	}
	else if (stat(arg_token[0], &buff) == -1)
	{
		arg_token[0] = get_command(arg_token[0]);
		if (arg_token[0] != NULL)
		{
			execute(arg_token);
			free(arg_token);
		}
		else
		{
			perror("Error");
		}
	}
}
char *get_command(char *arg_token)
{
	char *path = NULL;
	char **path_token = NULL;

	path = get_path();
	path_token = token_path(path);

	return (check_executable(path_token, arg_token));
}