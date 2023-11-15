#include "shell.h"
/**
 * read_line - Reads a line from user input.
 * Returns: Returns the number of characters read.
 */
void read_line(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read;
	const char *prompt;

	while (1)
	{
	if (isatty(STDIN_FILENO) && isatty(STDOUT_FILENO))
	{
	prompt ="#cisfun$ ";
	write(STDOUT_FILENO, prompt, string_len(prompt));
	}
	read = getline(&input, &len, stdin);
	if (read == -1)
	{
		if (feof(stdin))
		{
		break;
		}
		else
		{
		perror("getline");
		break'
		}
	free(input);
	input = NULL;
	len = 0;
}
