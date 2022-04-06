#include <stdio.h>
void main ()
{
	int x,y ; 
printf (" enter your id : ");
scanf (" %d",&x);
switch (x)
{
case 1234 :
 printf ("enter password : ");
 scanf (" %d",&y);
 break ;
 default : 
 printf ("wrong id\n");
 break ;
 }
switch (y)
{
case 1234 :
 printf ("harvey specter");
 break ;
 default : 
 printf ("wrong password");
 break ;
}
}
