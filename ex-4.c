#include<stdio.h>

int main()
{
int arr[100],n,i;
int*ptr;

printf("Enter  number of elements:");
scanf("%d",&n);

printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	ptr= arr;
	printf("squares of elements:\n");
	for(i=0;i<n;i++)
	printf("%d\n",(*ptr)*(*ptr));
	ptr++;

}
/*
Enter  number of elements:2
Enter 2 elements:
52
52
squares of elements:
2704
2704
*/