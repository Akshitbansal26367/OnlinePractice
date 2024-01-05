#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;
    scanf("%d", &n);
    
    //declaring dynamic array
    arr = (int*) malloc(n * sizeof(int));
    
    //taking input from console
    for(i = 0; i < n; i++) 
    scanf("%d",&arr[i]);
    
    //logic for reversing the array elements
    for(i = n-1 ; i>=0 ; i--)
    printf("%d ",arr[i]);
    
    return 0;
}
