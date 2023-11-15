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

	while (1)/*infinite loop*/
	{
		if (isatty(STDIN_FILENO) && isatty(STDOUT_FILENO))
		{
			prompt = "#cisfun$ ";
	/*display prompt to user*/
			write(STDOUT_FILENO, prompt, string_len(prompt));
		}
	/*read a line from std input*/
		read = getline(&input, &len, stdin);
		if (read == -1)
		{
		/*if end of file is reached,exit the loop*/
			if (feof(stdin))
			{
				break;
			}
			else
			{
		/*if there is an erroe, print eror message*/
			perror("getline");
			free(input);/*free allocated memory*/
			input = NULL;
			len = 0;
			break;

			}
		}
	}
	free(input);/*free memory after loop*/
	input = NULL;/*set pointer to null*/
	len = 0;/*reset the length to 0*/
}
