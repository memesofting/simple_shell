#include "main.h"

/**
 * memeaccess - checks if file exist and is executable
 * @path: file pathname
 *
 * Return: 0 on success
 */

int memeaccess(char *path)
{
	if (access(path, F_OK | X_OK) == -1)
	{
		perror("Could not access file\n");
		return (-1);
	}
	return (0);
}
