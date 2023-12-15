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
	i = 0;
	fork();
	if (fork() == -1)
	{
		perror("Error\n");
		return (-1);
	}
	else if (fork() == 0)
	{
		while (i < 5)
		{
			fork();
			/*char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};*/
			printf("I am: %d and mu father is:%d\n ", getpid(), getppid());
			exec = execve(argv[0], argv, NULL);
			if (exec == -1)
			{
				perror("Error");
				return (-1);
			}
			i++;
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
