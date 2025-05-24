#include<stdio.h>

int main()
{
	int arr[100],n,i,max;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++);
	 scanf("%d",&arr[i]);
	 
	 max=arr[0];
	 for(i=1;i<n;i++);
	 {
	 
	 	if(arr[i]>max)
	 	max=arr[i];
	 }
	 
	 printf("largest elements:%d\n",max);
	 
}
/*
Enter number of elements:8
Enter 8 elements:
5
largest elements:5
*/