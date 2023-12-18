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
        printf("%d\n",y);
        
        else
        printf("%d\n",x);
    }
}
