#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        
        if (x>y)
        printf("YES\n");
        
        else
        printf("NO\n");
    }
}
