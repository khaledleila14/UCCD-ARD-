#include<stdio.h>
void main()
{ 
int x ;
printf (" enter your rusalt ");
scanf (" %d",&x);
if (0 <= x && x < 50)
{ 
printf(" your rating is falid ");
}
else if (x >= 50 && x < 65)
{
printf (" your rating is normal");
}
else if (x >= 65 && x < 75) 
{
printf (" your rating is good");
}
else if (x >= 75 && x < 85) 
{
printf (" your rating is very good");
}
else if (x >= 85)
 {
 printf ("your rating is excellent" );
}
}

