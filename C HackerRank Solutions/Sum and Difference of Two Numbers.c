#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //declaring int and float variables
    int a,b;
    float c,d;
    
    //taking input from console
    scanf("%d%d%f%f",&a,&b,&c,&d);
    
    //printing sum and difference of integer values
    printf("%d ",a+b);
    printf("%d",a-b);
    
    printf("\n");
    
    //printing sum and difference of float values
    printf("%0.1f ",c+d);
    printf("%0.1f",c-d);
    return 0;
}
