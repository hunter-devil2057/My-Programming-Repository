/* C program to implement a TM for L = { set of all strings over {0,1} such that the string have number of 0s followed by same number of 1s. */
#include<stdio.h>
#include<conio.h>

enum states { q0, q1, q2,q3,q4,qr};

int main()
{
	char input[100];
	enum states curr_state = q0;
	int i;
	for(i=0;i<100;i++)
	    input[i] = '\0';
	printf("Enter a binary string:\n");
	gets(input);
	i=0;
	while(1)
	{
		switch(curr_state)
		{
			case q0:
				if(input[i]=='0')
				{
					curr_state = q1;
					input[i]='x';
					i++;
				}
				else if(input[i]=='y')
				{
					curr_state=q3;
					i++;
				}
				else
					curr_state = qr;  // for invalid transition
				break;
			case q1:
				if(input[i]=='0')
				{
					curr_state = q1;
					i++;
				}
				else if(input[i]=='y')
				{
					curr_state = q1;
					i++;	
				}
				else if(input[i]=='1')
				{
					curr_state = q2;
					input[i]='y';
					i--;
				}
				else
					  curr_state = qr;
				break;
			case q2:
				if(input[i]=='0')
				{
					curr_state = q2;
					i--;
				}
				else if(input[i]=='y')
				{
					curr_state = q2;
					i--;	
				}
				else if(input[i]=='x')
				{
					curr_state = q0;
					i++;
				}
				else
				   	curr_state = qr;
				break;
			case q3:
				if(input[i]=='y')
				{
					curr_state = q3;
					i++;
				}
				else if(input[i]=='\0')
				{
					curr_state=q4;
				}
				else
					curr_state = qr;
				break;
		}//end of switch
     		 if(curr_state == qr || curr_state==q4)
    		     break;
	}//end of while loop

 if(curr_state == q4)
	   printf("String %s is accepted.");
 else 
 	   printf("String %s is not accepted.");	    
		
   return 0;			
}