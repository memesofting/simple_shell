#include "main.h"

/**
 * memeexecve - executes command
 * @command: command to execute
 *
 * Return: 0
 */

int memeexecve(char **command)
{
	if (command == NULL)
	{
		perror("Error: no command to execute");
		return (-1);
	}
	else
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror("Error\n");
			return (-1);
		}
	}
}
