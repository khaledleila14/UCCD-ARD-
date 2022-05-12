#include<stdio.h>
void main(void)
{
int arr[10],i;
int avarage ;
int sum=0 ;
for(i=0;i<10;i++)
{
printf("enter numbers %d :",i);
scanf(" %d",&arr[i]);
}
for(i=0;i<10;i++)
{
sum=sum+arr[i];
}
avarage =sum/10;
printf("Sum = %d\n",sum);
printf("Avarage = %d",avarage);
}