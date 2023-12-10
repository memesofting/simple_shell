#include "main.h"

/**
 * main - fork, wait, and execve exercise
 *
 * Return: Always 0
 */

int main(void)
{
	int exec, i, status;
	pid_t child;

	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	child = fork();
	if (child == -1)
	{
		perror("Error");
		return (-1);
	}
	if (child == 0)
	{
		/*char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};*/
		exec = execve(argv[0], argv, NULL);
		if (exec == -1)
		{
			perror("Error");
			return (-1);
		}
	}
	else
	{
		wait(NULL);
		printf("all set\n");
	}
	/*printf("all set\n");*/
	return (0);
}
