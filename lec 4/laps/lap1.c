#include <stdio.h>
int get_max (int num_1 , int num_2);
void main ()
{
	int num_1 , int num_2 ;
printf ("enter num 1 : ");
scanf (" %d",&num_1);
printf ("enter num 2 : ");
scanf (" %d",&num_2);
printf ( "%d",get_max(num_1,num_2));
}
int get_max (int num_1 , int num_2)
{
if (num_1 > num_2){
return num_1;
}
else if (num_2>num_1){
return num_2;
}
else{	
return num_1,num_2;
}
}

