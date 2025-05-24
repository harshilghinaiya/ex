#include<stdio.h>

struct car
{
	char model[50];
	int year;
	float price;
};

int main(){

struct car cars[100];
int n,i;
	printf("Enter number of cars:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\n Enter details for car %d\n",i+1);
		printf("model:");
		scanf("%s",&cars[i].model);
		printf("year:");
		scanf("%s",&cars[i].year);
		printf("price:");
		scanf("%s",&cars[i].price);
	}
	printf("\n car details :\n");
	for(i=0;i<n;i++)
	{
	
		printf("car %d-model :%s,year:%d,price: %2.f\n",i+1,cars[i].model,cars[i].year,cars[i].price);
	}
}