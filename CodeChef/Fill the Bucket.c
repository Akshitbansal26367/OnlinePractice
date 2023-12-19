#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        int k,x;
        scanf("%d %d",&k,&x);
        printf("%d\n",k-x);
    }
}
