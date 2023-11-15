#include "shell.h"
/**
* execute_command - executes commands entered.
* @c: Command entered.
* @args: Array of pointers to commands.
* Return: 0
*/
void execute_command(char *c, char **args)
{
	char **env = envp;
	int status;
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork");
		exit(1);
	}
	else if (pid == 0)
	{
		if (execve(c, args, env) == -1)
		{
			perror("./shell");
			free(c);
			exit(98);
		}
	}
	else
	{
		wait(&status);
	}
}

