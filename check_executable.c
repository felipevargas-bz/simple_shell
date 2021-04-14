#include "header.h"
/**
 * 
 * 
 * 
 */
char *check_executable(char **path_token, char *arg_token)
{
	int i = 0, state = 0;
	char *command = NULL;
	struct stat buff;
	
	command = concat_path_token_and_arg_token(path_token[i], arg_token);
	state = stat(command, &buff);
    i++;
	while(state != 0 && path_token[i])
	{
		command = concat_path_token_and_arg_token(path_token[i], arg_token);
		state = stat(command, &buff);
		i++;
	}
	if (path_token[i] == NULL)
	{
		printf("Error command not found\n");
		return (NULL);
	}

	return (command);
}