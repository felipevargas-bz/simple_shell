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


void shell(void);
void shell_direc(void);
char **argument(void);
char **tock_arg(char *buff_arg);
int execute(char **arg_token);
char *get_command(char *arg_token);
char *get_path(void);
char **token_path(char *path);
char *check_executable(char **path_token, char *arg_token);
char *concat_path_token_and_arg_token(char *path_token, char *arg_token);
/*Auxiliars*/
int _strlen(char *str);
char *not_path(char *path_environ);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, size_t n);
int _strlen_command(char *path_token, char *arg_token);
int count_routes(char *path);
int count_arg(char *buff_arg);
char *_strdup(char *src);

#endif /**HEADER_H*/
