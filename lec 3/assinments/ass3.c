#include <stdio.h>
void main ()
{
	int x , y , z , a;
	printf ("enter the num of rows : ");
	scanf (" %d",&x);
	for ( y = 1 ; y <= x ; y ++ )
	{
	for ( z = 1 ; z <= ( x - y ); z++ )
		printf (" "); 
	
	for ( a = 1 ; a <= ( (2*y) - 1 ); a++ )
	printf ("*"); 

	printf ("\n");
	}
	
	}	