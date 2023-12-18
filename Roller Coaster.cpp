#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        int h,x;
        scanf("%d %d",&h,&x);
        
        if (x<=h)
        printf("YES\n");
        
        else
        printf("NO\n");
    }
}
