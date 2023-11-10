#include "shell.h"
/**
 * tokenization - splits strings into null terminated tokens.
 * @input: - The string to be split.
 * Return: Returns a pointer to a null terminated
 *  string containing the next token or NULL if no more tokens
 *  are found.
 */
void tokenization(char *input, char *args[])
{
	int i = 0;
	char *token;

	token = strtok(input, " ");


	while (token != NULL)
	{
	args[i++] = token;
	token = strtok(NULL, " ");
	}
	args[i] = NULL;
}
