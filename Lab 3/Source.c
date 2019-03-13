//Lab 3 - Grace Keane
//File Writing
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct myBugs {
	int bugId;
	char appName[20];
	char bugStatus[20];
	char username[20];
}myBugs;

void main(){

	//file pointers & struct pointer
	FILE* fptr;
	FILE* fp;
	myBugs bug;

	//variables
	char uname[20];
	int numBugs = 0;
	int numInputs = 0;

	//creating the file
	fptr = fopen("bugs.txt", "r");

	//prompting the user to enter username
	printf("Please enter your uername: \n");
	scanf("%s", uname);
	printf("\nHow many bugs: \n");
	scanf("%d", &numBugs);

	if (fptr == NULL) 
	{
		printf("There was an error when opening the file for reading");
	}
	else
	{
		printf("\nFile has been read in sucessfully for reading\n");

		printf("Your bugs are: \n");

		while (!feof(fptr)) 
		{
			numInputs = fscanf(fptr, "%d %s %s %s", &bug.bugId, bug.appName, bug.bugStatus, bug.username);

			if (numInputs == 4)
			{
				if (strcmp (uname, bug.username) == 0) 
				{
					printf("%d %s %s %s\n", bug.bugId, bug.appName, bug.bugStatus, bug.username);
				}
			}
		}
		fclose(fptr);
	}
}

