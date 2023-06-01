// This is a Simple C++ Program to write using standard C file handling 

#include <iostream>
using namespace std;

int main()
{
	FILE *file_pointer = fopen("Information.txt", "w");
	char user_name[25];
	cout << "Please Enter your name: ";
	cin.getline(user_name, 20);
	fputs(user_name, file_pointer);
	cout << "Please Open Your Root Folder Location.\nNew file named Information.txt has been created in your root folder and your name has been stored in that file. " << endl;
	getchar();
	return 0;
}