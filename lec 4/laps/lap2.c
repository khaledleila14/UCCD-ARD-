#include <stdio.h>
void main ()
{
int x , y , z ;
printf ("enter num 1 before swab : \n");
scanf (" %d",&x);
printf ("enter num 1 before swab : \n");
scanf (" %d",&y);
z=x;
x=y;
y=z;
printf ("num 1 after swab : %d\n",x);
printf ("num 2 after swab : %d\n",y);
}

