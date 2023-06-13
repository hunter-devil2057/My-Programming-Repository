#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>

int main()
{
    int i;
    void *sharedMemory;
    char buffer[100];
    int sharedMessageId;
    sharedMessageId=shmget((key_t)2345, 1024, 0666|IPC_CREAT);
    printf("Key of Shared Memory is: %d\n",sharedMessageId);
    sharedMemory=shmat(sharedMessageId,NULL,0);
    printf("Process attached at: %p\n",sharedMemory);
    printf("Enter some data to write to Shared Memory:\n");
    read(0,buffer,100);
    strcpy(sharedMemory,buff);
    printf("Therefore, Message you wrote is:\n\t%s\n",(char *)sharedMemory);
}
