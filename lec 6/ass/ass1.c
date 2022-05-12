#include <stdio.h>
void SwapFunc(int *i, int *j)
{
int Temp;
Temp = *i;
*i = *j;
*j = Temp;
}
void bubbleSort(int arr[], int num)
{
int x, y, temp;   
for(x = 0; x < num - 1; x++) 
{    
for(y = 0; y < num - x - 1; y++) 
{    
if(arr[y] > arr[y + 1]) 
{
SwapFunc(&arr[y], &arr[y + 1]);
}
}
}
}
int main()
{
int arr[50], n, x;   
printf("Enter the Number of Elements : ");
scanf("%d", &n);    
printf(" Enter  Value of Elements: ");
for(x = 0; x < n; x++)
scanf("%d", &arr[x]);    
bubbleSortExample(arr, n);
printf("Array after implementing bubble sort: ");
for(x = 0; x < n; x++)
{
printf("%d  ", arr[x]);
}
}
