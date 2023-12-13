#include "main.h"

/**
 * memeexecve - executes command
 * @command: command to execute
 *
 * Return: 0
 */

void memeexecve(char **command)
{
	if (command == NULL)
	{
		perror("Error: no command to execute");
	}
	else
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror("Error\n");
		}
	}
}
