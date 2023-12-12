#include "main.h"

/**
 * memeexecve - executes command
 *
 * Return: 0
 */

int memeexecve(char **command)
{
	//pid_t child;
	//child = fork();
	//if (!child)
	//{
	//	perror("Error\n");
	//	return (-1);
	//}
	//if (child == 0)
	//else
	//{
	//	if (execve(command[0], command, NULL) == -1)
	//	{
	//		perror("Error\n");
	//	}
	//}
	if (execve(command[0], command, NULL) == -1)
	{
		perror("Error\n");
	}
	return (0);
}
