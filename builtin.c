#include "shell.h"
/**
 * builtin_func  - checks the built in functions
 * @c: commands that have been tokenized
 * @input: input from user
 *
 * Return: 1 if succesfull, 0 if not
 */
int builtin_func(char **c, char *input)
{
	struct builtin builtin_struct = {"env", "exit"};

	/*check if the command is "env"*/
	if (string_comp(*c, builtin_struct.env) == 0)
	{
	/*execute environ_var function to display environment variables*/
		char **environ_var = environ;
		while (*environ_var != NULL)
		{
			printf("%s\n", *environ_var);
		}
		return (1);
	}
	/*check if the command is "exit"*/
	else if (string_comp(c, builtin_struct.exit) == 0)
	{

		exit_prog(c, input);
		return (1);
	}
	return (0);
}
