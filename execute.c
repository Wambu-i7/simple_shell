#include "shell.h"
/**
* execute_command - executes commands entered.
* @c: Command entered.
* @args: Array of pointers to commands.
* Return: 0
*/
void execute_command(char *c, char **args)
{
	char **env = envp;/*array of env variables*/
	int status;/*status of child process*/
	pid_t pid = fork();/*fork to create new,child process*/

	if (pid == -1)/*check if fork system call is succesful*/
	{
		perror("fork");
		exit(1);
	}
	else if (pid == 0)
	{
		/*child process*/
		if (execve(c, args, env) == -1)
		{
			/*execute command in the child process*/
			perror("./shell");
			free(c);/*free memory*/
			exit(98);/*exit child procss*/
		}
	}
	else
	{
		/*parent process*/
		wait(&status);/*waiting for child process to complete*/
	}
}

