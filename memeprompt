#include "main.h"

/**
 * memeprompt - shows prompt and gets input from user
 *
 * Return:
 */
int memeprompt(void)
{
	size_t n;
	ssize_t numread;
	char *buf;

	buf = NULL;
	while (1)
	{
		printo("memeshell$ ");
		numread = getline(&buf, &n, stdin);
		if (numread == -1)
		{
			printo("closing memeshell\n");
			free(buf);
			return (-1);
		}
		printo(buf);
		/*printo("command is: %s\n", buf);*/
	}
	free(buf);
	return(0);
}
