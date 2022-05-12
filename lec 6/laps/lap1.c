#include <stdio.h>
void main ()
{
int x = 10;
printf ("x before = %d\n",x);
int * ptr = &x ;
* ptr = 20 ;
printf ("x after = %d",x);
}

