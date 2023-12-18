#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--!=0)
    {
        int r1,r2,r3;
        scanf("%d%d%d",&r1,&r2,&r3);
        
        if((r1>r2+r3)|| (r2>r3+r1) || (r3>r1+r2))
        printf("Yes\n");
        
        else
        printf("No\n");  
    }
}
