#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while (t--!=0)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        
        int c = 30*y;
        
        if (c<=x)
        printf("YES\n");
        
        else
        printf("NO\n");
    }
}
