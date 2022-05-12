#include <stdio.h>
void main ()
{
int search  ;  
int found = 0 ;
int arr [10];
for (int i = 0 ; arr[i] <= 10; i ++) 
{
printf ("enter the value");
scanf (" %d",&arr[i]);
}
printf ("enter the value u look for");
scanf (" %d",&search);
for (int i = 0 ; arr[i]<=10; i++)
{
if (arr[i]== search)
{
found = found++ ;
}
}
if (found > 0)
{
printf ("the value u look for is found %d",search);
}
if (found = 0)
{
printf ("the value u look for is not found);
}
}