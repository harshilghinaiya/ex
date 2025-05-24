#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a char:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'a': case'e':case'i':case'o':case'u':
		case'A':case'E':case'I':case'O':case'U':
			printf("%C is vowel.\n",ch);
			break;
			
			
			default:
			printf("%cs a consonant.\n",ch);
			
	}
}
/*
cons..
Enter a char:harshil
hs a consonant.
vov...
Enter a char:aEiou
a is vowel.

*/
