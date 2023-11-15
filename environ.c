#include "shell.h"
/**
 * environ - handles the environment variables and prints them to stdout
 * 
<<<<<<< HEAD
 * Return: has no return value
=======
 * Return: 0 on success.
>>>>>>> 886be66e33b755a94a3afd9ce5160df4d74c99f7
 */
void environ(void)
{
	int i = 0;
	char **env = envp/*a pointer to environment variables*/
/*loop through the variables*/
	while (env[i] =! NULL)
	{
		/*writing content of current variable to stdout*/
		write(STDOUT_FILENO, (const void *)env[i], string_len(env[i]));
		/*add a newline to separate variables*/
		write(STDOUT_FILENO, "\n", 1);
		i++;/*move to next variable*/
	}
}
