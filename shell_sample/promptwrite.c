#include "main.h"

int main(void)
{
	size_t n;
	ssize_t numread;
	char *buf;
	char prompt;
	int exec;

	prompt = '$';
	buf = NULL;
	while (1)
	{
		write(1, &prompt, 1);
		numread = getline(&buf, &n, stdin);
		if (numread == -1)
		{
			printf("closing\n");
			free(buf);
			return (-1);
		}
		char *argv[] = {(char *)buf, NULL, NULL};
		exec = execve(argv[0], argv, "PWD");
		if (exec == -1)
		{
			perror("error");
		}
		printf("command is: %s\n", buf);
	}
	free(buf);
	return(0);
}
