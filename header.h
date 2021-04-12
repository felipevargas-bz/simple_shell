#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

extern char **environ;
struct stat buff;


int shell(void);
char *get_path(void);
char *not_path(char *path_environ);
int count_routes(char *path);
char **tok_path(char *path, int number_routes);
short int count_arg(char *arg);
char **tok_arg(char *arg, int number_arg);
void execute(char *command, char **arg_token);
char *check_executable(char **path_token, char **arg_token);
int _strlen_command(char *path_token, char *arg_token);
char *concat_path_token_and_arg_token(char *path_token, char *arg_token);

#endif /**HEADER_H*/
