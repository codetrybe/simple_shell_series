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

	string = strtok(sentence, stop_at);
	while (string != NULL)
	{
		printf("%s\n", string);
		string = strtok(NULL, stop_at);
	}
	pid = getpid();
	printf("The process ID is %i\n", pid);

	ppid = getppid();
	printf("The parent process ID is %i\n", ppid);

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
