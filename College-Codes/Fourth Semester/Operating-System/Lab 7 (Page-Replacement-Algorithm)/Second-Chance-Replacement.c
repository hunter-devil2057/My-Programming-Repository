#include<stdio.h>
#include<conio.h>

int n,nf, in[100], p[50], hit=0, i,j,k, pgfaultcnt=0;

void initialize(){
     pgfaultcnt=0;
    for(i=0; i<nf; i++)
        p[i]=9999;
}

void dispPages(){
     for (k=0; k<nf; k++){
        if(p[k]!=9999)
            printf(" %d",p[k]);
    }
}

void getData(){
     printf("Enter length of page reference sequence:");
    scanf("%d",&n);
    printf("Enter the page reference sequence:\n");
    for(i=0; i<n; i++)
        scanf("%d",&in[i]);
    printf("Enter no of frames:");
    scanf("%d",&nf);
}
void dispPgFaultCnt(){
    printf("\nTotal no of page faults:%d",pgfaultcnt);
}
int isHit(int data){
    hit=0;
    for(j=0; j<nf; j++){
        if(p[j]==data){
            hit=1;
            break;
        }}
    return hit;
}
int getHitIndex(int data){
    int hitind;
    for(k=0; k<nf; k++){
        if(p[k]==data){
            hitind=k;
            break;
        }}
    return hitind;
}
int main(){
    getData();
    int usedbit[50], victimptr=0;
    initialize();
    for(i=0; i<nf; i++)
        usedbit[i]=0;
    for(i=0; i<n; i++){
        printf("\nFor %d:",in[i]);
        if(isHit(in[i])) {
            printf("No page fault!");
            int hitindex=getHitIndex(in[i]);
            if(usedbit[hitindex]==0)
            usedbit[hitindex]=1;
        }
        else{
            pgfaultcnt++;
            if(usedbit[victimptr]==1){
                do{
                    usedbit[victimptr]=0;
                    victimptr++;
                    if(victimptr==nf)
                        victimptr=0;
                }
                while(usedbit[victimptr]!=0);
            }   
            if(usedbit[victimptr]==0){
                p[victimptr]=in[i];
                usedbit[victimptr]=1;
                victimptr++;
            }
            dispPages();
        }
        if(victimptr==nf)
            victimptr=0;
    }
    dispPgFaultCnt();
}
