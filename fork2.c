#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int pid1 = -1;
int status = -1;

int main() {
	if ((pid1 = fork()) == 0) { 
		printf ("Hello world from the child.\n");
	}


	if (pid1 > 0) {
		waitpid(pid1, &status, WNOHANG | WUNTRACED);
		printf ("Hello world from the parent.\n");
	}
}
