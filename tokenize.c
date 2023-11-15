#include "shell.h"
/**
 * tokenization - splits strings into null terminated tokens.
 * @input: - The string to be split.
 * Return: Returns a pointer to a null terminated
 *  string containing the next token or NULL if no more tokens
 *  are found.
 */
void execute_command(char *command);
void tokenization(char *input)
{
	char *token;

	token = strtok(input, " ");


	while (token != NULL)
	{
	execute_command(input);
	token = strtok(NULL, " ");
	}
}
