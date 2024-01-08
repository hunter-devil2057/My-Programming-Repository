#include <stdio.h>
#include <conio.h>

int is_attack(int i, int j, int board[5][5], int N)
{
	int k, l;
	// checking for column j
	for (k = 1; k <= i - 1; k++)
   {
		if (board[k][j] == 1)
			return 1;
	}
	// checking upper right diagonal
	k = i - 1;
	l = j + 1;
	while (k >= 1 && l <= N)
   {
		if (board[k][l] == 1) return 1;
		k = k + 1;
		l = l + 1;
	}
	// checking upper left diagonal
	k = i - 1;
	l = j - 1;
	while (k >= 1 && l >= 1)
   {
		if (board[k][l] == 1) return 1;
		k = k - 1;
		l = l - 1;
	}
	return 0;
}

int n_queen(int row, int n, int N, int board[5][5])
{
	if (n == 0) return 1;
	int j;
	for (j = 1; j <= N; j++)
   {
		if (!is_attack(row, j, board, N))
      {
			board[row][j] = 1;
			if (n_queen(row + 1, n - 1, N, board)) return 1;
			board[row][j] = 0; // backtracking
		}
	}
	return 0;
}

int main()
{
	int i, j, board[5][5];
	for (i = 0; i <= 4; i++){
		for (j = 0; j <= 4; j++)
			board[i][j] = 0;
	}
	n_queen(1, 4, 4, board);
	// printing the matix
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
			printf("%d\t", board[i][j]);
		printf("\n");
	}
	printf("\nName: Manish Shiwakoti\nT.U. Symbol No.: 26448/077");
	return 0;
}