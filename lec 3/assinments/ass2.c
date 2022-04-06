#include <stdio.h>
void main ()
{
	int x=0 , y=0 ;
	printf ("enter your id : ");
	scanf (" %d",&x);
	while (x == 1234 )
	{
		printf ("enter your passwored : ");
		scanf (" %d",&y);
		if ( y == 7788)
		printf ("welcome ahmed");
	else 
		printf ("try again : ");
	scanf (" %d",&y);
	printf ("welcome ahmed");
		break ; 
	}
	while (x == 5678 )
	{
		printf ("enter your passwored : ");
		scanf (" %d",&y);
		if ( y == 5566)
		printf ("welcome amr");
	else 
		printf ("try again : ");
	scanf (" %d",&y);
	printf ("welcome amr");
		break;
	}
	while (x == 9870 )
	{
		printf ("enter your passwored : ");
		scanf (" %d",&y);
		if ( y == 1122)
		printf ("welcome wael");
	else 
	{
		printf ("try again : ");
	    scanf (" %d",&y);
		printf ("welcome wael");
	}
		break;
	}
	while (x != 1234 && x != 5678 && x !=9870)
	{
		printf ("you are not register ");
		break;
	}
	}
	