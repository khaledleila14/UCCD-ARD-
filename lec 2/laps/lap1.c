#include<stdio.h>
void main()
{
float x , y ;
printf ("enter your working hours") ;
scanf (" %f",&x);
y = ( x * 50 );
if( x < 40)
{
y = y - (.1 * y) ;
}
printf ("your salry is %f",y);
}