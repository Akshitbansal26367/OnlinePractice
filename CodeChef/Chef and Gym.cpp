#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while (t--!=0)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        int a = x+y;
        
        if (z>=a) 
        printf("2\n");
        
        else if (z>=x)
        printf("1\n");
        
        else
        printf("0\n");
    }
}
