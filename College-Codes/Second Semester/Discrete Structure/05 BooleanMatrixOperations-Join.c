#include<stdio.h>
#include<conio.h>
int main()
{
int row1, col1, row2, col2, i, j, k;
	int first[5][5],second[5][5],join[5][5];
    // First Matrix
	printf("Enter the Number of Rows and Columns of First Matrix:\n");
	scanf("%d %d", &row1, &col1);
	printf("Enter the Elements present in First Matrix:\n");
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
			scanf("%d", &first[i][j]);  //reading first matrix
		}
	}

    // Second Matrix
	printf("Enter the Number of Rows and Columns of Second Matrix:\n");
	scanf("%d %d", &row2, &col2);
    // Reading elements present in Second Matrix
	printf("Enter the Elements of Second Matrix:\n");
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
			scanf("%d", &second[i][j]);
		}
	}
    // Displaying First Matrix
		printf("The Elements present in First Matrix are:\n");
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
			printf("%d\t", first[i][j]);   //displaying  first matrix
		}
		printf("\n");
	}
    // Displaying Second Matrix
	printf("The Elements present in Second Matrix are:\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2; j++)
		{
			printf("%d\t",second[i][j]);    //Displaying second matrix
		}
		printf("\n");
	}
	for (i=0; i<row1; i++)
	{
		for(j=0;j<col2; j++)
		{
			join[i][j]=first[i][j]||second[i][j];   //Main operation/line for performing boolean operation
		}
	}
	printf("Therefore, the Boolean Join of the Matrices:\n");
	for (i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			printf("%d\t", join[i][j]);
		}
		printf("\n");
	}
	return 0;	
}