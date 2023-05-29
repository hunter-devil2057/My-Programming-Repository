#include<stdio.h>
#include<conio.h>
int main ()
{
	int row1, col1, row2, col2, i, j, k, sum=0;
	int first[5][5],second[5][5],multiply[5][5];

// 	First Matrix
	printf("Enter the Number of Rows and Columns of first matrix:\n");
	scanf("%d %d", &row1, &col1);
	printf("\nEnter the Elements present in First Matrix:\n");
    // Reading the elements present in First Matrix
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
		    scanf("%d", &first[i][j]);
		}
	}
	
// 	Second Matrix
	printf("Enter the Number of Rows and Columns of Second Matrix:\n");
	scanf("%d %d", &row2, &col2);
// 	Checking the condition for multiplying matrices
	if(col1!=row2)
	printf("The Matrices cannot be multiplied with each other.\n");
	else
	{
		printf("\nEnter the elements of second matrix:\n");
	}

// 	Reading the elements in Second Matrix
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
		scanf("%d", &second[i][j]);
		}
	}
    
// 	Performing Boolean Product Operation of Two Matrices
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			for(k=0; k<row2; k++)
			{
				sum=sum|| first[i][k]&&second[k][j];
			}
			multiply[i][j]=sum;
			sum=0;
		}
	}
    
	printf("Therefore, the Boolean Product of two Matrices is:\n");
// 	Displaying Boolean Product of Two Matrices
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			printf("%d\t", multiply[i][j]);
		}
		printf("\n");
	}
	return 0;
}
