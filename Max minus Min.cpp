#include <stdio.h>

int main() 

{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        int a,b,c,max,min;
        scanf("%d %d %d ",&a,&b,&c);
        
        if ((a>b && a>c) && (b>c))
        {
            max = a;
            min = c;
        }
        
        else if ((a>b && a>c) && (b<c))
        {
            max = a;
            min = b;
        }
        
        else if ((b>a && b>c) && (a<c))
        {
            max = b;
            min = a;
        }
        
        else if ((b>a && b>c) && (a>c))
        {
            max = b;
            min = c;
        }
        
        else if ((c>a && c>b) && (a>b))
        {
            max = c;
            min = b;
        }
        
        else
        {
            max = c;
            min = a;
        }
        
        printf("%d\n",max-min);
    }
}
