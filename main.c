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
