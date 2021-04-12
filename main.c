#include "header.h"
/**
 * 
 * 
 * 
 */
int main(void)
{
	shell();

	return (0);
}
int shell(void)
{
	char *path = get_path();
	int number_routes = count_routes(path);
	char **path_token = tok_path(path, number_routes);
	char *arg = NULL;
	size_t len = 0;

	isatty(1);
	while ((write(1, "shell $ ", 8)) && (getline(&arg, &len, stdin) != EOF))
	{
		char *command = NULL;
		if (arg[0] == '\0' || arg[0] == '\n')
		{
			continue;
		}
		char **arg_token = tok_arg(arg, (int)count_arg(arg));

		if (arg_token[0][0] == '/')
		{
			int state = stat(arg_token[0], &buff);

			if (state == 0)
			{
				execute(arg_token[0], arg_token);
				free(arg_token);
				continue;
			}
			else
			{
				printf("command not found\n");
				free(arg_token);
				continue;
			}
		}
		else
		{
			command = check_executable(path_token, arg_token);
			execute(command, arg_token);
		}

		free(arg_token);
	}
	free(arg);
	free(path);
	free(path_token);

	return (0);
}
