#include "shell.h"
/**
*main - Entry point.
*Return: 0 indicating success.
*/
void execute_command(char *command);
void read_line(void);
int main(void)
{
	char *args[MAX_ARGS];
	char *command = args[0];

	read_line();
	if (args[0] != NULL)
	{
	execute_command(args[0]);
	}
	return (0);
}
