#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while (t--!=0)
    {
        int x;
        scanf("%d",&x);
        int a = 100;
        int b = 0.1*x;
        
        if (a>=b)
        printf("%d\n",a);
        
        else
        printf("%d\n",b);
    }
}
