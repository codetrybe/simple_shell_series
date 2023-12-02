#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void say_hello(char *name);
int main(int ac, char **av)
{
	//argv[] = {"./hello", "Topman", "Paul-Dike", NULL};
	printf("The last argument passed was %s\n", av[ac-1]);
	printf("You passed %i arguments\n", ac-1);


/*
	pid_t r_value;

	r_value = getpid();
	say_hello("Harrison");

	int r_val;
	printf("Hello Topman\n");
	printf("PID = %i\n", r_value);
	printf("%d\n", r_val);
*/
	return (0);
}

void say_hello(char *name)
{
	printf("Hello %s!\n", name);
}
