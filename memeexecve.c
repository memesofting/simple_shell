#include "main.h"
/**
 * memeexecve - executes command
 * @command: command to execute
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
		if (access(command[0], F_OK | X_OK) == -1)
		{
			perror("Could not access file\n");
			exit(EXIT_FAILURE);
		}
		else
		{
			/*memefork();*/
			if (execve(command[0], command, environ) == -1)
			{
				perror("Error, can't execute file\n");
				exit(EXIT_FAILURE);
			}
		}
	}
	return (0);
}

#include "main.h"
/**
 * memefork - creates a child process
 * @pro: commant to execute under process
 * Return: 0
 */
int memefork(void)
{
	pid_t child;

	child = fork();
	if (child == -1)
	{
		perror("Can't create child\n");
		return (-1);
	}
	return (0);
}
