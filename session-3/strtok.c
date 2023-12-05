#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t ppid, pid;
	char sentence[] = "Checking the pid and ppid";
	char *string;
	char *stop_at = " ";

	pid = fork();
	if (pid == -1)
	{
		printf("fork() failed\n");
		return (EXIT_STATUS);
	}
	else if (pid == 0)
	{
		printf("THE CHILD\n");
	}
	else
		printf("THE PARENT\n");

	sleep(10);
	string = strtok(sentence, stop_at);
	while (string != NULL)
	{
		printf("%s\n", string);
		string = strtok(NULL, stop_at);
	}

/*
	string = strtok(sentence, stop_at);
	printf("%s\n", string);

	string = strtok(NULL, stop_at);
	printf("%s\n", string);

	string = strtok(NULL, stop_at);
	printf("%s\n", string);

	string = strtok(NULL, stop_at);
	printf("%s\n", string);

	string = strtok(NULL, stop_at);
	printf("%s\n", string);
*/
	return (0);
}
