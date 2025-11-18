#include <stdio.h> // For printf
//#include <stdlib.h> // For exit
#include <unistd.h> // For fork, getpid
#include <sys/wait.h> // For wait


int main() {

    printf("Starting the fork example...");
    fflush(stdout); // Ensure all output is printed before forking
    int pid = fork();
    wait(NULL); // Parent waits for child to finish
    if (pid == 0)
    {
        printf("Hello from the child process! My PID is %d\n", getpid());
    }
    else if (pid > 0)
    {
        printf("Hello from the parent process! My PID is %d and my child's PID is %d\n", getpid(), pid);
    }


    return 0;
}


