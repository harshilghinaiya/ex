#include<stdio.h>

void reversestring(char str[])
{
	int len=0,i;
	while(str[len]!='\0')
	len++;
	
	for(i=len -1;i>=0;i--)
	printf("%c",str[i]);
}

int main()
{
	char str[100];
	
	printf("Enter a string:");
	scanf("%s",str);
	
	printf("Enter a string:");
	reversestring(str);
	
}
/*
Enter a string:harshil
Enter a string:lihsrah
*/