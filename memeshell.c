#include "main.h"
/**
 * main - creates shell
 *
 * Return: Always 0 on success
 */
int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		intershell();
	}
	else
	{
		nonintershell();
	}
	return (0);
}
#include "main.h"
/**
 * intershell - shell in interactive mode
 */
void intershell(void)
{
	char *newbuf, *bufcopy;
	pid_t child;
	char **av;
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
		bufcopy = strdup(newbuf);
		av = memetoken(bufcopy, " \t\n");
		child = fork();
		if (child == 0)
		{
			memeexecve(av);
		}
		else
			wait(&status);
		free(newbuf);
		free(bufcopy);
		free(av[0]);
		free(av);
	}
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
		if (feof(stdin))
		{
			free(buf);
			printo("closing shell\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(buf);
			perror("failed to getline\n");
			exit(EXIT_FAILURE);
		}
	}
	return (buf);
}
#include "main.h"
/**
 * nonintershell - shell in non interactive mode
 *
 */
void nonintershell(void)
{
	char *newbuf, *bufcopy;
	pid_t child;
	char **av;
	int status;

	/*while (1)*/
	{
		/*newbuf = malloc(sizeof(char) * 1024);*/
		newbuf = memereadline();
		bufcopy = strdup(newbuf);
		av = memetoken(bufcopy, " \t\n");
		child = fork();
		if (child == 0)
		{
			memeexecve(av);
		}
		else
			wait(&status);
		free(newbuf);
		free(bufcopy);
		free(av[0]);
		free(av);
	}
}
