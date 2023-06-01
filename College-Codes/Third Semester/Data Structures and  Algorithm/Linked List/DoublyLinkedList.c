#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct DLL
{
    int data;
     struct DLL *prev,*next;
};
void addbeg(struct DLL **head, int num)
{
    struct DLL *newnode;
    newnode=(struct DLL *)malloc(sizeof(struct DLL));
    newnode->data=num;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        (*head)->prev=newnode;
        newnode->next=*head;
        *head=newnode;
    }
}
void addend(struct DLL **head, int num)
{
    struct DLL *newnode,*temp;
    newnode=(struct DLL *)malloc(sizeof(struct DLL));
    newnode->prev=NULL;
    newnode->next=NULL;
    if(*head==NULL)
    {*head=newnode;}
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}
void display(struct DLL **head)
{
    struct DLL *temp;
    if(*head==NULL)
    {
        printf("\n Linked list does not exist");
    }
    else
    {
        printf("\n Linked list is\n");
        temp=*head;
        while(temp!=NULL)
        {
            printf("%d-> ",temp->data);
            temp=temp->next;
        }
    }
}
void delbeg(struct DLL **head)
{
    struct DLL *temp;
    if(*head==NULL)
    {
        printf("\n Linked list does not exist");
    }
    else
    {
        temp=*head;
        *head=(*head)->next;
       (*head)->prev=NULL;
       printf("\n Deleted item is %d",temp->data);
        free(temp);
    }
}

void delend(struct DLL **head)
{
    struct DLL *temp,*temp1;
    if(*head==NULL)
    {
        printf("\n Linked list does not exist");
    }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp1->prev->next=NULL;
        printf("\n Deleted item is %d",temp->data);
        free(temp);
    }
}

 int main()
{
    struct DLL *head;
    int num,choice;
    head=NULL;
    printf("\n1.Add at beginning\n2.Add at end\n3.Display\n4.Delete from beginning \n5.Delete from end\n6.Exit");
    while(1)
    {
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\n Enter the number:");
                scanf("%d",&num);
                addbeg(&head,num);
                break;
            case 2:
                printf("\n Enter the number:");
                scanf("%d",&num);
                addend(&head,num);
                break;
            case 3:
                display(&head);
                break;
            case 4:
                delbeg(&head);
                break;
            case 5:
                delend(&head);
                break;
            case 6:
            exit(0);
        }
    }
    return 0;
}
