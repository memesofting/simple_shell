#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	/*char *argv[] = {"/bin/ls", NULL, NULL};*/
	/*char *argv[] = {"/usr/bin/pwd", NULL, NULL};*/
	/*char *argv[] = {"mypid", NULL, NULL};*/

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error\n");
	}
	printf("After execve\n");
	return (0);
}
