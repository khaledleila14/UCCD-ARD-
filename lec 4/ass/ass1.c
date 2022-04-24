#include <stdio.h>
void main()
{   
    int a, b, c, d, x;
   printf ("enter num 1 : \n");
scanf (" %d",&a);
printf ("enter num 2 : \n");
scanf (" %d",&b);
printf ("enter num 3 : \n");
scanf (" %d",&c);
printf ("enter num 4 : \n");
scanf (" %d",&d);

    if (a>b && a>c && a>d)
	{
      if (b<c && b<d)
	  {
        x = b;
      }
      else if (c<b && c<d)
	  {
       x = c;
      }
      else if (d<b && d<c)
	  {
      x = d;
      }
      printf("max: %d\n", a);
      printf("min: %d", x);
    }
    else if (b>a && b>c && b>d) 
	{
      if (a<c && a<d)
	  {
        x = a;
      }
      else if(c<a && c<d)
	  {
        x = c;
      }
      else if(d<a && d<c)
	  {
        x = d;
      }
      printf("max: %d\n", b);
      printf("min: %d",x);
    }
    else if (c>a && c>b && c>d)
    {
      if (a<b && a<d)
	  {
        x = a;
      }
      else if(b<a && b<d)
	  {
        x = b;
      }
      else if(d<a && d<b)
	  {
        x = d;
      }
      printf("max: %d\n", c);
      printf("min: %d", x);
    }
    else if (d>a && d>b && d>c) 
	{
      if (a<b && a<c)
	  {
        x = a;
      }
    else if(b<a && b<c)
	{
      x = b;
    }
    else if(c<a && c<b)
	{
     x = c;
    }
    printf("max: %d\n", d);
    printf("min: %d", x);
  }
  }