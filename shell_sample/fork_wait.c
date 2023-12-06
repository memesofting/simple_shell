#include "main.h"

/**
 * main - fork and wait example
 *
 * Return: Always 0
 */

int main(void)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child == 0)
	{
		printf("Wait for me, wait for me :(\n");
		sleep(2);
	}
	else
	{
		wait(&status);
		printf("Oh, it's all better now\n");
	}
	return (0);
}
