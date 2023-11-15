#include "shell.h"
/**
 * tokenization - splits strings into null terminated tokens.
 * @input: - The string to be split.
 * Return: Returns a pointer to a null terminated
 *  string containing the next token or NULL if no more tokens
 *  are found
 */
char **tokenization(char *input)
{
	char **string_array;
	char *token;
	int i = 0;

	/*allocate memory for an array of char pointers*/
	string_array = malloc(8 * sizeof(char *));
	if (string_array == NULL)
	{
		perror("Memory allocation failed");
		exit(1);
	}
	/*use srtok to extract tokens from input string*/
	token = strtok(input, " \n");
	while (token != NULL)
	{
		/*Allocate memory for each token*/
		string_array[i] = string_dup(token);
		if (string_array[i] == NULL)
		{
			perror("Memory allocation failed");
			exit(1);
		}
		i++;
		token = strtok(NULL, " \n");
	}
	/*set last element of array to a NULL*/
	string_array[i] = NULL;

	return (string_array);
}
