#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while (t--!=0)
    {
        int w,x,y,z;
        scanf("%d %d %d %d",&w,&x,&y,&z);
        
        int money = (x-y)*z;
        printf("%d\n",money+w);
    }
}
