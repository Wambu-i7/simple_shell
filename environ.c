#include "shell.h"
/**
 * environ - handles the environment variables
 * 
 * Return: 0 on success.
 */
void environ(void)
{
	int i = 0;
	char **env = envp

	while (env[i] =! NULL)
	{
		write(STDOUT_FILENO, (const void *)env[i], string_len(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
