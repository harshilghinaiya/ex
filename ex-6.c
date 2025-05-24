#include<stdio.h>
#include<string.h>

int main()
{
	FILE*fptr;
	char name[50],coures[50];
	int i;
	
	fptr=fopen("ex-6.txt","w");
	if(fptr == NULL)
	{
		printf("Error oprning file!\n");
		return 1;
	}
	
	for(i=0;i<3;i++)
	{
		printf("Enter name of student %d:",i+1);
		scanf("%s",name);
		
		printf("Enter coures %d:",i+1);
		scanf("%s",coures);
		fprintf(fptr,"student %d;%s- %s\n",i+1,name,  coures);
		
	}
		fclose(fptr);
		printf("Data witten to data.txt successfully.\n");
	}
/*
Enter name of student 1:harshil
Enter coures 1:C++
Enter name of student 2:om
Enter coures 2:C++
Enter name of student 3:preshit
Enter coures 3:C++
Data witten to data.txt successfully.
*/