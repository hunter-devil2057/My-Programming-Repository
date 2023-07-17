#include <stdio.h>
#include<conio.h>

struct Process
{
	int AT, BT, CT, TAT, WT, finished;
} p[20];

int minimumAT(struct Process pro[20], int n){
	int min, id, i, j;
	for (i = 0; i < n; i++){
		if (pro[i].finished == 0){
			min = pro[i].AT;
			id = i;
			for (j = 0; j < n; j++){
				if (min > pro[j].AT && pro[j].finished == 0){
					min = pro[j].AT;
					id = j;
				}
			}
			break;
		}
	}
	return id;
}
int main(){
	int n, avWT = 0, avTAT = 0, minAtPid = 0, i, j, notComplete = 1;
	printf("Enter total number of processes:");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		printf("\nEnter Process Arrival Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].AT);
		printf("\nEnter Process Burst Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].BT);
		p[i].finished = 0; 		
	}
	minAtPid = minimumAT(p, n);

	int startAT = p[minAtPid].AT, time = p[minAtPid].AT, currTime = time;
	while (notComplete == 1){
		minAtPid = minimumAT(p, n);
		for (i = 0; i < n; i++){
			if (p[i].finished == 0 && minAtPid == i && time >= p[minAtPid].AT){
				if (time != startAT) printf(" --> ");
				printf("P%d(%d-%d)", i + 1, currTime, currTime + p[i].BT);
				currTime = currTime + p[i].BT;
				p[i].CT = currTime;
				p[i].finished = 1;
			}
		}
		if (currTime == time){
			time++;
			currTime++;
		}
		else time = currTime;
		notComplete = 0;
		for (j = 0; j < n; j++){
			if (p[j].finished == 0) notComplete = 1;
		}
	}
	printf("\nProcess\t\tCompletion Time\t\tTurnaround Time\t\tWaiting Time");
	for (i = 0; i < n; i++)
	{
		p[i].TAT = p[i].CT - p[i].AT;
		p[i].WT = p[i].TAT - p[i].BT;
		avTAT += p[i].TAT;
		avWT += p[i].WT;
		printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t%d", i + 1, p[i].CT, p[i].TAT, p[i].WT);
	}
	avTAT /= n;
	avWT /= n;
	printf("\nAverage Turnaround Time:%d", avTAT);
	printf("\nAverage Waiting Time:%d\n", avWT);
    printf("Name: Manish Shiwakoti\tSymbol No.: 26448/077\tLab Report: 5");
    return 0;
}
