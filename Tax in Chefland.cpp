#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--!=0)
    {
        int x;
        scanf("%d",&x);
        
        if(x>100)
        printf("%d\n",x-10);
        
        else
        printf("%d\n",x);
    }
}
