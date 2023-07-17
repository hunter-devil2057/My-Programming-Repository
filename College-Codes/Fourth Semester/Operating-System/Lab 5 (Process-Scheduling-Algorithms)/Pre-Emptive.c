#include <stdio.h>
#include<conio.h>

struct Process
{
	int AT, BT, PT, tempBT, CT, TAT, WT, finished;
} p[20];

int minimumPT(struct Process pro[20], int n, int time)
{
	int id, min, i, j;
	for (i = 0; i < n; i++){
		if (pro[i].finished == 0 && pro[i].AT <= time) {
			min = pro[i].PT;
			id = i;
			for (j = 0; j < n; j++){
				if (min > pro[j].PT && pro[j].finished == 0 && pro[j].AT <= time) {
				 	min = pro[j].PT;
					id = j;
				}
            }
			break;
		}
    }
	return id;
}

int main()
{
	int n, avWT = 0, avTAT = 0, minAtId = 0, minAT = 0, minPtPid = 0, i, j, notComplete = 1;
	printf("Enter total number of processes:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)	{
		printf("Enter Process Arrival Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].AT);
		printf("Enter Process Burst Time\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].BT);
		printf("Enter Process Priority\n");
		printf("P[%d]:", i + 1);
		scanf("%d", &p[i].PT);
		p[i].tempBT = p[i].BT;
		if(minAT > p[i].AT) {
			minAT = p[i].AT;
			minAtId = i;
		}
		p[i].finished = 0; 	
	}
	int startAT = minAT, time = minAT, currTime = time;
	while (notComplete == 1) {
		minPtPid = minimumPT(p, n, currTime);
		for (i = 0; i < n; i++)	{
			if (p[i].finished == 0 && minPtPid == i && time >= minAT) {
				if (time != startAT) printf(" --> ");
				printf("P%d(%d-%d)", i + 1, currTime, currTime + 1);
				currTime++;
				p[i].CT = currTime;
				p[i].tempBT--;
				if(p[i].tempBT == 0) p[i].finished = 1;
			}
        }
		if (currTime == time) {
			time++;
			currTime++;
		}
		else 
            time = currTime;
		notComplete = 0;
		for (j = 0; j < n; j++)	{
			if (p[j].finished == 0) notComplete = 1;
		}
	}
	printf("\nProcess\t\tCompletion Time\t\tTurnaround Time\t\tWaiting Time");
	for (i = 0; i < n; i++)	{
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
}
