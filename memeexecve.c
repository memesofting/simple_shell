#include "main.h"

/**
 * memeexecve - executes command
 *
 * Return: 0
 */

int memeexecve(char *command[])
{
	pid_t child;
	int len;

	len = strlen(command);
	write(1, &command, len)
	child = fork();
	if (child == 0)
	{
		exec = execve(command[0], command, NULL);
		if (exec == - 1)
		{
			perror("Error\n");
		}
	}
	else 
		wait(NULL);
}
