#include <stdio.h>
//#include <sys/types.h>
//#include <unistd.h>

int main(int ac, char **av)
{
	char *input = NULL; //*input
	size_t size = 0;

	printf(":$ ");
	getline(&input, &size, stdin); //char **ptr = &input
	printf("\nYOUR INPUT: %s", input);
	printf("size = %lu\n", size);

	return (0);
}
