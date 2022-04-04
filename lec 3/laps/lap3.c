#include<stdio.h>
void main()
{ 
int x,sum=0 ; 
for (int y=0 ; y<10; y++)
{
	printf ("enter num -%d :",y);
	scanf(" %d",&x);
	sum +=x ;	
}
printf("sum is %d\n",sum);
float average = sum/10.0;
printf (" average is %0.2f\n", average);


}