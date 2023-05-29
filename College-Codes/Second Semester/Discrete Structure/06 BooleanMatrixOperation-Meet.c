#include<stdio.h>
#include<conio.h>
int main()
{
    int row1, col1, row2, col2, i, j, k;
    int first_mat[5][5], second_mat[5][5], meet[5][5];
    // First Matrix
    printf("Enter the Number of Rows and Columns of First Matrix:\n");
    scanf("%d%d", &row1, &col1);
    // Reading the elements present in First Matrix
    printf("Enter the Elements of First Matrix:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &first_mat[i][j]);
        }
        
    }

    // Second Matrix
    printf("Enter the Number of Rows and Columns of Second Matrix:\n");
    scanf("%d%d", &row2, &col2);
    // Reading the elements present in Second Matrix
    printf("Enter the Elements of Second Matrix:\n");
    for (i=0; i<row2; i++)
    {
        for (j=0; j<col2; j++)
        {
            scanf("%d", &second_mat[i][j]);
        }
    }

    // Displaying First Matrix
    printf("The Elements present in First Matrix is:\n");
    for (i=0; i<row1; i++)
    {
        for (j=0; j<col1; j++)
        {
            printf("%d\t", first_mat[i][j]);
        }
        printf("\n");
    }
    
    // Displaying Second Matrix
    printf("The Elements present in Second Matrix is:\n");
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
			printf("%d\t", second_mat[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			meet[i][j]=first_mat[i][j]&&second_mat[i][j];   //Performing Boolean Meet Operation.
		}
	}
	printf("Therefore, the Boolean meet of the matrices is:\n");
	for (i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			printf("%d\t", meet[i][j]);
		}
		printf("\n");
	}
	return 0;	
}