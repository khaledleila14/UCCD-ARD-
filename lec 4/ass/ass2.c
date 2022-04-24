#include <stdio.h>
void main()
{  
int x , y , a;
int id ;
printf (" enter the num of operands : ");
scanf (" %d",&a);
if (a == 1)
{
printf (" enter the num : ");
scanf (" %d",&x);
printf (" enter the obration id :  ");
scanf (" %d",&id);

 if (id == 7)
{
  printf("rusalt = %d", !x);
}
else if (id == 10)
{
  printf("rusalt = %d",++x);
}
else if (id == 11)
{
  printf("rusalt = %d",--x);
}
else 
{
	printf ( "error" );
}
}
else if (a == 2)
{
printf (" enter the first num : ");
scanf (" %d",&x);
printf (" enter the second num : ");
scanf (" %d",&y);
printf (" enter the obration id :  ");
scanf (" %d",&id);
if (id == 1)
{
	printf ("rusalt = %d",x+y );
}
else if (id == 2)
{
	printf ("rusalt = %d",x-y);
}
else if (id == 3)
{
	printf ("rusalt = %d",(x*y));
}
else if (id == 4)
{
	printf ("rusalt = %d",(x/y));
}
else if (id == 5)
{
  printf("rusalt = %d", x&y);
}
else if (id == 6)
{
  printf("rusalt = %d", x|y);
}
else if (id == 7)
{
  printf("rusalt = %d", !x);
}
else if (id == 8)
{
  printf("rusalt = %d", x^y);
}
else if (id == 9)
{
  printf("rusalt = %d", x%y);
}
else if (id == 10)
{
  printf("rusalt = %d",++x);
}
else if (id == 11)
{
  printf("rusalt = %d",--x);
}
else 
{
printf ( "error" );
}
}
else 
	printf ("error");
}

