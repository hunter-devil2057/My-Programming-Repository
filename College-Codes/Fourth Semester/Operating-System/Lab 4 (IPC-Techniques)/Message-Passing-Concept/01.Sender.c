#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MaxText 512  // maximum length of the message allowed for sending process

struct ipcMessage
{
	long int messageType;
	char someText[MaxText];
};

int main()
{

	int running = 1;
	int messageId;
	struct ipcMessage processMessage;
	char buffer[50]; // array to store user input
	messageId = msgget((key_t)14534, 0666 | IPC_CREAT);
	// -1 means the message queue is not created
	if (messageId == -1)
	{
		printf("Error faced while creating queue....\n");
		exit(0);
	}

	while (running)
	{

		printf("Enter Some Text:");
		fgets(buffer, 50, stdin);
		processMessage.messageType = 1;
		strcpy(processMessage.someText, buffer);
		// msgsnd returns -1 if the message is not sent
		if (msgsnd(messageId, (void *)&processMessage, MaxText, 0) == -1)
		{
			printf("Sorry, Message you've entered is not sent...\n");
		}
		if (strncmp(buffer, "end", 3) == 0)
		{
			running = 0;
		}
	}
	printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077\nLab Report No.: 4");
	return 0;
}