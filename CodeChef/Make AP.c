#include <stdio.h>

int main(void) 
{
    int t;
    scanf ("%d",&t);
    
    while (t--!=0)
    {
        int a,b,c;
        scanf ("%d %d",&a,&c);
        
        b = (a+c)/2;
        
        int d = b - a;
        int e = c - b;
        
        if (d == e)
        printf("%d\n",b);
        
        else
        printf("-1\n");
    }
}
