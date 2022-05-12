#include <stdio.h>
void main()
{
   int x, y, *p, *q, sum,sub;
   printf("Enter numbers\n");
   scanf("%d%d", &x, &y);
   p = &x;
   q = &y;
   sum = *p + *q;
   sub = *p - *q ;
   printf("Sum = %d\n", sum);
    printf("sub = %d\n", sub);
}