#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    int i, j, k, temp, choice, n1, n2, set1[10], set2[10], set3[10], flag;
    // First Set
    printf("Enter Size of Set 1:");
    scanf("%d",&n1);  //Reads the Number of Elements present in First Set
    // Receiving elements present in First Set
    printf("Enter Elements present in Set 1:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&set1[i]);  //Reads the elements present in First Set from 0 - n
    }
    // Second Set
    printf("\n\nEnter Size of Set 2:");
    scanf("%d",&n2); //Reads the Number of Elements present in Second Set
    // Receiving elements present in Second Set
    printf("Enter Elements present in Set 2:\n"); 
    for(i=0;i<n2;i++)
    {
        scanf("%d",&set2[i]);       //Reads the Elements present in Second Set from 0 - n
    }

    //Displaying Menu Option for Performing Basic Set Operations
    while(1)
    {
        printf("\nPress 1 for Union of Two Sets.");
        printf("\nPress 2 for Intersection of Two Sets.");
        printf("\nPress 3 for Difference between Two Sets.");
        printf("\nPress 4 for Exiting this Program.");
        printf("\n\nEnter your Choice:");
        scanf("%d",&choice);
    
        switch(choice)
        {
    //Case for finding Union of Two Sets
        case 1:
            printf("\nThe Union of Two Sets is:\n");
            k=0;
            for(i=0;i<n1;i++)
            {
                set3[k]=set1[i];
                k++;
            }
            for(i=0;i<n2;i++)
            {
                flag=1;
                for(j=0;j<n1;j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
                temp=k;
                for(k=0; k<temp; k++)
                {
                    printf("%d\t",set3[k]);
                }
                printf("\n\n");
            break;

        // Case for finding Intersection between two sets.
        case 2:
            printf("\nThe Intersection of Two Set us is:\n");
            k=0;
            for(i=0;i<n2;i++)
            {
                flag=1;
                for(j=0;j<n1;j++)
                {
                    if(set2[i]==set1[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                {
                    set3[k]=set2[i];
                    k++;
                }
            }
            temp=k;
            for(k=0; k<temp; k++)
            {
                printf("%d\t",set3[k]);
            }
            break;

        // Case for finding the difference between two Sets
        case 3:
            printf("\nThe Difference between two sets is:\n");
            k=0;
            for(i=0;i<n1;i++)
            {
                flag=1;
                for(j=0;j<n2;j++)
                {
                    if(set1[i]==set2[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    set3[k]=set1[i];
                    k++;
                }
            }
                temp=k;
                for(k=0; k<temp; k++)
                {
                    printf("%d\t",set3[k]);
                }
            break;

        // Exiting a Program
            case 4:
                printf("Exiting a Program.........................");
                exit(0);

        // Incase of default argument
            default:
                printf("Invalid choice!!!\nPlease choose the option present in displayed Menu.1");
            }
    }
    return 0;
}
