#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_FILES 100

typedef struct
{
	char name[20];
	int size;
	int blocks[10]; // Maximum 10 blocks per file
} Inode;

typedef struct
{
	int file_count;
	Inode inodes[MAX_FILES];
} Filesys;

void initiateFS(Filesys *fs)
{
	fs->file_count = 0;
}

void createFile(Filesys *fs, const char *name, int size)
{
	if (fs->file_count >= MAX_FILES)
	{
		printf("Cannot create file. Maximum file count reached.\n");
		return;
	}
	if (size <= 0 || size > 10)
	{
		printf("Invalid file size. File creation failed.\n");
		return;
	}
	Inode newInode;
	strcpy(newInode.name, name);
	newInode.size = size;

	for (int i = 0; i < size; i++)
	{
		int block;
		printf("Enter block number for block %d: ", i + 1);
		scanf("%d", &block);
		if (block < 0 || block >= 100)
		{
			printf("Invalid block number. File creation failed.\n");
			return;
		}
		newInode.blocks[i] = block;
	}
	fs->inodes[fs->file_count] = newInode;
	fs->file_count++;
	printf("File '%s' created successfully.\n", name);
}

void display(const Filesys *fs)
{
	printf("Filesys Contents:\n");
	for (int i = 0; i < fs->file_count; i++)
	{
		Inode inode = fs->inodes[i];
		printf("File: %s\tSize: %d\tBlocks: ", inode.name, inode.size);
		for (int j = 0; j < inode.size; j++)
		{
			printf("%d ", inode.blocks[j]);
		}
		printf("\n");
	}
}

int main()
{
	Filesys fs;
	initiateFS(&fs);

	createFile(&fs, "file1.txt", 3);
	createFile(&fs, "file2.txt", 2);
	display(&fs);
	return 0;
}