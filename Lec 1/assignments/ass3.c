#include <stdio.h>

void main()
{
int x , y , v , z ;
int sum ;
int mul ;
printf ("inter the firts num x");
scanf (" %d",&x);
printf ("inter the sec num y ");
scanf (" %d",&y);
sum  = x+y ;
mul  = x-y ;
z = x & y ;
v = x^y ;
printf(" x+y = %d",sum );
printf (" x-y =%d",mul); 
printf(" x&y = %d",z);
printf(" x^y = %d",v );
}
