#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int *arr;
    int i,n,sum = 0;
    scanf("%d",&n);
    
    //declaring dynamic array
    arr = (int*)malloc(n*sizeof(int));
    
    //taking input from console
    for (i = 0 ; i<n ; i++)
    scanf("%d",&arr[i]);
    
    //printing sum of array elements
    for(i = 0; i<n; i++)
    sum = sum + arr[i];
        
    printf("%d",sum);
}
