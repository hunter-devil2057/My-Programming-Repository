#include<stdio.h>
#include<stdlib.h>
struct SLL
{
    int data;
    struct SLL *ptr;
};
void addbeg(struct SLL **head, int num)
{
    struct SLL *newnode;
    newnode=(struct SLL *)malloc(sizeof(struct SLL));
    newnode->data=num;
    newnode->ptr=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        newnode->ptr=*head;
        *head=newnode;
    }
}
void addend(struct SLL **head, int num)
{
    struct SLL *newnode,*temp;
    newnode=(struct SLL *)malloc(sizeof(struct SLL));
    newnode->data=num;
    newnode->ptr=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        temp=*head;
        while(temp->ptr!=NULL)
        {
            temp=temp->ptr;
        }
        temp->ptr=newnode;
    }
}
void addsp(struct SLL **head, int num)
{
    struct SLL *newnode,*temp;
    int i,pos;
    newnode=(struct SLL *)malloc(sizeof(struct SLL));
    newnode->data=num;
    newnode->ptr=NULL;
    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        temp=*head;
        for(i=0;i<pos-1;i++)
        {
            temp=temp->ptr;
        }
        newnode->ptr=temp->ptr;
        temp->ptr=newnode;
    }
}
void display(struct SLL **head)
{
    struct SLL *temp;
    if(*head==NULL)
    {
        printf("\n Linked list doesnot exist");
    }
    else
    {
        printf("\n Linked list is\n");
        temp=*head;
        while(temp!=NULL)
        {
            printf("%d-> ",temp->data);
            temp=temp->ptr;
        }
    }
}
void delbeg(struct SLL **head)
{
    struct SLL *temp;
    if(*head==NULL)
    {
        printf("\n Linked list doesnot exist");
    }
    else
    {
        temp=*head;
        *head=(*head)->ptr;
        printf("\n Deleted item is %d",temp->data);
        free(temp);
    }
}
void delend(struct SLL **head)
{
    struct SLL *temp,*temp1;
    if(*head==NULL)
    {
        printf("\n Linked list doesnot exist");
    }
    else
    {
        temp=*head;
        while(temp->ptr!=NULL)
        {
           temp1=temp;
            temp=temp->ptr;
        }
        temp1->ptr=NULL;
        printf("\n Deleted item is %d",temp->data);
        free(temp);
    }
}
int main()
{
    struct SLL *head;
    int num,choice;
    head=NULL;
    printf("\n1.Add at beginning\n2.Add at end\n3.Add at specific position \n 4.Display \n 5.Delete from beginning\n6.Delete from end\n7.Exit");
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
                printf("\n Enter the number:");
                scanf("%d",&num);
                addsp(&head,num);
                break;
            case 4:
                display(&head);
                break;
            case 5:
                delbeg(&head);
                break;
            case 6:
                delend(&head);
                break;
            case 7:
                exit(0);
        }
    }
    return 0;
}