#include<stdio.h>
void main()
{ 
int x=12 ;
printf("enter the value of 3*4:");
scanf(" %d",&x);
while (x ==12)
{
	printf("thank u \n");
	printf("enter the value of 3*4:");
	scanf(" %d",&x);
}
while (x != 12) 
{
		printf("try again \n");
	printf("enter the value of 3*4:");
	scanf(" %d",&x);
}
}
