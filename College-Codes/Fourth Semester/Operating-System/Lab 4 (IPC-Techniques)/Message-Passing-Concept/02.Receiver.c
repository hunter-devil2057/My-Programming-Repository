#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct ipcMessage
{
	long int messageType;
	char someText[BUFSIZ];
};

int main()
{
	int running = 1;
	int messageId;
	struct ipcMessage processMessage;
	long int messageToRecord = 0;
	messageId = msgget((key_t)14534, 0666 | IPC_CREAT);

	while (running)
	{
		msgrcv(messageId, (void *)&processMessage, BUFSIZ, messageToRecord, 0);
		printf("Data received: %s\n", processMessage.someText);
		if (strncmp(processMessage.someText, "end", 3) == 0)
		{
			running = 0;
		}
	}
	msgctl(messageId, IPC_RMID, 0);
    printf("Student's Name: Manish Shiwakoti\nT.U. Symbol No.: 26448/077\nLab Report No.: 4");
    return 0;
}