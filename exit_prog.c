#include "shell.h"
/**
 * exit_prog - Terminates the program.
 *@c: Command enterd.
 *@input: -input from user.
 *Return: No return.
 */
void exit_prog(char **c, char *input)
{
	free(input);
	exit(0);
}
