#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while (t--!=0)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int a = m*k;
        
        if (a>=n)
        printf("Yes\n");
        
        else 
        printf("No\n");
    }
}
