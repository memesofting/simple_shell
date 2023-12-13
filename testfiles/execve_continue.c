#include "main.h"

/**
 * main - execve example
 *
 * Return: Always 0
 */

int main(void)
{
	int exec;
	pid_t child;
	/*char *argv[] = {"/bin/ls", "-l", NULL};*/
	/*char *argv[] = {"/bin/ls", NULL, NULL};*/
	/*char *argv[] = {"/usr/bin/pwd", NULL, NULL};*/
	char *argv[] = {"mypid", NULL, NULL};

	printf("Before execve\n");
	child = fork();
	if (child == 0)
	{
		exec = execve(argv[0], argv, NULL);
		if (exec == -1)
		{
			perror("Error\n");
		}
	}
	else
	{
		wait(NULL);
		printf("After execve\n");
	}
	return (0);
}
