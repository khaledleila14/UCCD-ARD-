#include <stdio.h>
void main()
{
   int x, y, *p, *q, sum;

   printf("Enter numbers\n");
   scanf("%d%d", &x, &y);
   p = &x;
   q = &y;
   sum = *p + *q;
   printf("Sum = %d\n", sum);
}