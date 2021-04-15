#include "header.h"
/**
 *token - breaks a string into nonempty tokens
 *@args: Command line
 *Return: 0 success
 */

int function_builtins(char **tok_args, char *args)
{
	int pos = 0, nun_func = 2;
	char *built_in[] = { "exit", "env"};
	int (*built_in_func[])(char **, char *) = { &func_exit, &func_env};

	if (tok_args != NULL && args != NULL)
	{
		for (pos = 0; pos < nun_func; pos++)
		{
			if (_strcmp(args[0], built_in[pos]) == 0)
				return((*built_in_func[pos])(tok_args, args));
			else
			{
				return (-1);
			}
		}
	}
	return (1);
}
/**
 * execute_exit - comman to exit the program
 * @arg: double pointer to function.
 * @buffer: buffer of array
 * Return 0 on success
 */
int func_exit(char **tok_args, char *args)
{
	free(tok_args);
	free(args);
	exit(0);
	return (0);
}
/**
 * execute_env - execute the enviroment
 * @arg: double pointer to array 
 * @buffer: buffer of array
 * Return: 0 on success.
 */
int func_env(char **tok_args, char *args)
{
    (void) args;
	(void) tok_args;

    char **en = environ;
    char n = '\n';
    while (*en != NULL)
    {
        write(STDOUT_FILENO, *en, _strlen(*en));
        write(STDOUT_FILENO, &n, 1);
        en++;
    }
    return(0);
}
