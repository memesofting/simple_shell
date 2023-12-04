#include <stdio.h>
#include <unistd.h>
/**
 * main - prints PID to stdout
 *
 * Return: Always 0
 */
int main(void)
{
	pid_t mypid, myppid;

	mypid = getpid();
	myppid = getppid();
	printf("%u\n", mypid);
	printf("%u\n", myppid);
	return (0);
}
