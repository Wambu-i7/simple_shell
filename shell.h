#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
void execute_command(char *command);
void tokenization(char *input);
void read_line(void);
#define MAX_ARGS 64
#define MAX_LENGTH 1024
#define EXTRA_SPACE 2
#define PATH_LENGTH 5
void environ(void);
char *concat_path_cmd(char *path, char *c);
#endif
