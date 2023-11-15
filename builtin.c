#include "shell.c"
/**
 * builtin_func  - checks the built in functions
 * @c: commands that have been tokenized
 * @input: input from user
 *
 * Return: 1 if succesfull, 0 if not
 */
int builtin_func(char **c, char *input)
{
	struct builtin 	builtin_struct = {"env", "exit"};

	/*check if the command is "env"*/
	if (string_comp(*c, builtin_struct.env) == 0)
	{
	/*execute environ() function to display environment variables*/
		environ();
		return (1);
	}
	/*check if command is exit*/
	else if (string_comp(c, builtin.exit) == 0)
	{

		exit_prog(c, input);
		return(1);
	}
	return (0);
}
