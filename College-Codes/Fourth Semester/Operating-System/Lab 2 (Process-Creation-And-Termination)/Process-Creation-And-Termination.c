// Simple C program for Process Creation and Termination.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t child_pid;
    // Create a new process
    child_pid = fork();
    if (child_pid < 0)
    {
        fprintf(stderr, "Fork failed\n");
        return 1;
    }
    else if (child_pid == 0)
    {
        // Child process
        printf("Child process: PID = %d\n", getpid());
        printf("Child process: Parent PID = %d\n", getppid());
        sleep(5); // Simulate some work for the child process
        printf("Child process: Exiting...\n");
        exit(0);
    }
    else
    {
        // Parent process
        printf("Parent process: PID = %d\n", getpid());
        printf("Parent process: Created child with PID = %d\n", child_pid);
        // Wait for the child process to terminate
        int status;
        waitpid(child_pid, &status, 0);
        if (WIFEXITED(status))
        {
            printf("Parent process: Child process exited with status: %d\n", WEXITSTATUS(status));
        }
    }
    printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077\nLab Report No.: 2");
    return 0;
}

