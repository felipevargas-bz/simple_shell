#include "header.h"
/**
 * argument - Read line command
 * Return: Address of the string with tokenized arguments
 */
char **argument(void)
{
	size_t len_arg = 0;
	char *buff_arg = NULL;
	char **arg_token = NULL;

	if (getline(&buff_arg, &len_arg, stdin) != EOF)
	{
		if (buff_arg[0] == 10)
		{
			free(buff_arg);
			return (NULL);
		}
		arg_token = tock_arg(buff_arg);
		/*if (function_builtins(arg_token, buff_arg) == 1)
		{
			free_doble_pointer(arg_token);
			free(buff_arg);
			return (NULL);
		}*/
		free(buff_arg);
	}
	else
	{
		write(STDOUT_FILENO, "\n", 1);
		free(buff_arg);
		exit(0);
	}
	return (arg_token);
}
