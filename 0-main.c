#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

extern char **environ;

/*
       +--------------------------------------------------------+
       |						     	|
       |							|
       |	    Exercise: fork + wait + execve           	|
       |						     	|
       |  Write a program that executes the command ls -l /tmp 	|
       |  in 5 different child processes. Each child should be 	|
       |  created by the same process (the father). Wait for a 	|
       |  child to exit before creating a new child.		|
       |							|
       |							|
       +------------------------ HINTS -------------------------+
       |							|
       |							|
       |	pid_t fork(void);				|
       |							|
       |  	int execve(char *pathname, char **argv,		|
       |		   char **envp);			|
       |							|
       |	pid_t wait(int *status);			|
       |							|
       |							|
       +--------------------------------------------------------+
*/

int main(void)
{
	/* your code goes here */


	return (0);
}
