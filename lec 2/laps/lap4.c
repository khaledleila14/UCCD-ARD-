#include<stdio.h>
void main()
{ 
int x ; 
printf (" enter your id ");
scanf (" %d",&x);
switch (x)
{
case 1234 :
 printf ("ahmed") ;
 break ;
 case 5678 : 
 printf ("yousef") ;
 break ;
 case 1145 :
 printf ("mina");
 break ; 
 default : 
 printf ("wrong id");
 break ;
 }
}