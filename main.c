#include "header.h"
/**
 * main - Initializes the program
 * Return: 0 Success
 */
int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		shell();
	}
	else
	{
		shell_direc();
	}
	return (0);
}
/**
 * shell - interprets the command line in interactive mode
 * Return: Void
 */
void shell(void)
{
	int state = 0;

	while (1)
	{
		write(1, "shell $ ", 8);
		state = shell_direc();

		if (state != 0)
		{
			continue;
		}
	}
}
