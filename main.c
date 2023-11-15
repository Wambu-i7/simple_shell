#include "shell.h"
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	char *input;
	char **tokens;
	char *path;
	char *command;

	while (1)
	{
		/*red the input*/
		read_line(&input);

		/*tokenize input*/
		tokens = tokenization(input);

		/*check for built in commands*/
		if (builtin_func(tokens, input))
		{
		/*if its a builtin, continue to next iteration of loop*/
			free(input);
			free(tokens);
			continue;
		}

		/*find the PATH*/
		path = find_path();
		/*validate path and get full command path*/
		command = valid_path(path, tokens[0]);

		if(command != NULL)
		{
			/*execute the command*/
			execute_command(command, tokens);
			free(command);
		}
		else
		{
			/*handle invalid command*/
			fprintf(stderr, "Command not found: %s\n", tokens[0]);
		}
		/*free allocated memory*/
		free(input);
		free(tokens);
	}
	return (0);
}
