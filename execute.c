#include "shell.h"

void execute_command(char *command)
{
	char *args[MAX_ARGS];
	char *envp[] = {NULL};

	pid_t pid = fork();

	if (pid == -1)
	{
	perror("fork");
	exit(1);
	}
	else if (pid == 0)
	{
	if (execve(args[0], args, envp) == -1)
	{
	perror("./shell");
	exit(1);
	}
	}
	else
	{
        wait(NULL);
	}
}

