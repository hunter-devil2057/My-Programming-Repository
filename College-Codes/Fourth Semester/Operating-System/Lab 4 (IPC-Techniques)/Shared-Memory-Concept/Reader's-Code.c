#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>

int main()
{
    int i;
    void *sharedMemory;
    char buff[100];
    int sharedMessageId;
    sharedMessageId=shmget((key_t)2345, 1024, 0666);
    printf("Key of Shared Memory is: %d\n",sharedMessageId);
    sharedMemory=shmat(sharedMessageId,NULL,0);
    printf("Process Attached At: %p\n",sharedMemory);
    printf("Data read from Shared Memory is: %s\n",(char *)sharedMemory);
}