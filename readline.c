#include "shell.h"
/**
 * read_line - Reads a line from user input.
 * Returns: Returns the number of characters read.
 */
void execute_command(char *command);
void tokenization(char *input, char *args[]);
void read_line(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read;
	char *args[MAX_ARGS];

	while (1)
	{
	printf("#cisfun$ ");
	read = getline(&input, &len, stdin);
	if (read != -1)
	{
	tokenization(input, args);
	}
	if (read > 0 && input[read - 1] == '\n')
	{
		input[read - 1] == '\0';
	}
	else
	{
	(feof(stdin));
	{
	printf("exit\n\n\n\n[Disconnected.....]\n");
	}
	exit(1);
	}
	}
	free(input);
}
