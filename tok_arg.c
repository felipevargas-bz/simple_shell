#include "header.h"
/**
 * 
 * 
 */
char **tock_arg(char *buff_arg)
{
	int number_arg = 0, pos = 0, len = 0;
	char **arg_token = NULL;
	char *copy_arg = NULL;

	len = _strlen(buff_arg);

	copy_arg = malloc(sizeof(char) * len + 1);
	copy_arg = _strcpy(copy_arg, buff_arg);

	number_arg = count_arg(buff_arg);
	arg_token = malloc(sizeof(char *) * (number_arg + 1));
	
	arg_token[pos] = strtok(buff_arg, " \t\n");
	pos++;

	while ((arg_token[pos] = strtok(NULL, " \t\n")))
	{
		pos++;
	}
	free(buff_arg);
	return (arg_token);
}