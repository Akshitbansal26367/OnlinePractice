#include <stdio.h>

void TimeDuration()
{
    int m,n,k;
    scanf("%d%d%d",&m,&n,&k);
    
    if(n*k<m)
    printf("YES\n");
    
    else if(n*k>m)
    printf("NO\n");
    
    else
    printf("NO\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    TimeDuration();
}
