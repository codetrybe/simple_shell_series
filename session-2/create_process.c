#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t r_val;

	printf("Hello Peers! How are you?\n");

	r_val = fork();
	if (r_val == -1)
	{
		printf("fork() failed!");
		return (-1);
	}

	if (r_val == 0)
	{
		printf("The child is executing!\n");
	}
	else
	{
		sleep(3);
		printf("The parent is executing!\n");
	}

	return (0);
}
