#include "main.h"
/**
 * main - creates shell
 * @ac: argument count
 * @av: argument
 * @env: environment variable
 * Return: Always 0 on success
 */
int main(int ac, char **av, char **env)
{
	char *newbuf;
	pid_t child;
	int status;

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
		av = memetoken(newbuf, " \t\n");
		if (memeaccess(av[0]) == -1)
		{
			continue;
		}
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
		/*perror("failed to getline\n");*/
		return (NULL);
	}
	/**
	 * printf("number of char read: %ld\n", numread);
	 * printf("Input is: %s\n", buf);
	 * printf("get lines done\n");
	 */
	return (buf);
}
