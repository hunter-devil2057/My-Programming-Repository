#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <pthread.h>

#define NumThreads 5

void *displayThread(void *threadID)
{
    long tID;
    tID = (long)threadID;
    printf("Creating Thread... |Thread ID: %ld|\n", tID);
    pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
    pthread_t threads[NumThreads];
    int rc;
    long t;
    for(t=0; t<NumThreads; t++)
    {
        printf("(+) Creating Thread: %ld\n", t);
        rc = pthread_create(&threads[t], NULL, displayThread, (void *)t);
        if (rc)
        {
            printf("(-)ERROR!!!\nSorry, user... Thread cannot be created: %d\n", rc);
            exit(-1);
        }
    }
    /* Last thing that main() should do */
    pthread_exit(NULL);     //
    printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077\nLab Report No.: 2");
    return 0;
 }