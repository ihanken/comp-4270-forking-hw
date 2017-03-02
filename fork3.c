#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

int parentPID = -1;
int childPID1 = -1;
int childPID2 = -1;

int main() {
	if (childPID1 = fork()) {
		// Seed srand.
		srand(time(NULL));

		if (childPID2 = fork()) { // Our parent.
			printf("Hello world from parent!\n");
		}
		else { // Child 2
			sleep((rand() % 5) + 1); // Sleep for 1 to 5 seconds.
			printf("Hello World from Child 2.\n");
		}	
	}
	else { // Child 1
		sleep((rand() % 5) + 1); // Sleep for 1 to 5 seconds.
		printf("Hello World from Child 1.\n");
	}
}
