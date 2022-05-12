#include <stdio.h>
int size_of_array=10;
void main ()
{
int arr[10];
int i;
for (i=0;i<size_of_array;i++)
{
printf("please,enter number %d",i+1 );
scanf(" %d",&arr[i]);
}
for (i=size_of_array;i>=0;i--)
	printf("\n%d",arr[i]);
}
