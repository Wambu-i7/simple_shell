#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <sys/stat.h>

#define MAX_ARGS 64
#define MAX_LENGTH 1024
#define EXTRA_SPACE 2
#define PATH_LENGTH 5
int _putchar(char c);

void environ(void);

void exit_prog(char **c, char *input);
char *valid_path(char **path, char *c);
char *concat_path_cmd(char *path, char *c)
int builtin_func(char **c, char *input);
void execute_command(char *c, char **args);
void tokenization(char *input);
void read_line(void);

/**
 * struct builtin builtin_struc - check for builtins.
 * @env: Environment variable.
 * @exit: exit the program.
 *Return: Nothing.
 */
struct builtin
{
	char *env;
	char *exit;
} builtin_struct;

/* Handle strings */
#endif
