#include "shell.h"
/**
 * read_line - Reads a line from user input.
 * Returns: Returns the number of characters read.
 */
void read_line(void)
{
	char *input = NULL;/*buffer that stores input line*/
	size_t len = 0;/*length of input line*/
	ssize_t read;/*nuber of characters read*/
	const char *prompt;/*prompt string to be displayed*/

	while (1)
	{
	if (isatty(STDIN_FILENO) && isatty(STDOUT_FILENO))
	{
	prompt = "#cisfun$ ";
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
			break;
		}
	free(input);
	input = NULL;
	len = 0;
}
