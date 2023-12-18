#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        int x;
        scanf("%d",&x);
        
        if(x>=30)
        printf("YES\n");
        
        else
        printf("NO\n");
    }
}
