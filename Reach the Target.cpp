#include <stdio.h>

int main() 
{
    int t,x,y;
    scanf("%d",&t);
    while(t--!=0)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",x-y);
    }
}
