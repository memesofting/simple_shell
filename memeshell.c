#include "main.h"
/**
 * main - creates shell
 * Return: Always 0 on success
 */
int main(void)
{
	char **av;
	size_t n;
	sisize_t numread;
	char *newbuf, *bufcopy;
	pid_t child;
	int status;

	numread = 0;
	while (1)
	{
		printo("memeshell$ ");
		newbuf = memegetline();
		if (newbuf == NULL)
		{
			printo("closing memeshell\n");
			free(newbuf);
			exit(-1);
		}
		bufcopy = strdup(newbuf);
		printo(bufcopy);
		av = memetoken(bufcopy, " \t\n");
		child = fork();
		if (child == 0)
		{
			memeexecve(av);
		}
		else
			wait(&status);
		free(newbuf);
	}
	return (0);
}

#include "main.h"
/**
 * memegetline - gets command from stdin
 *
 * Return: number of char read
 */
char *memegetline(void)
{
	size_t n;
	ssize_t numread;
	char *buf;

	buf = NULL;
	numread = getline(&buf, &n, stdin);
	if (numread == -1)
	{
		perror("failed to getline\n");
		return (NULL);
		/*exit (0);*/
	}
	printf("number of char read: %ld\n", numread);
	printf("Input is: %s\n", buf);
	printf("get lines done\n");
	return (buf);
}
