#include <stdio.h>

int main() 
{
    int t,N,M,K;
    scanf("%d",&t);
    
    for(int i=1; i<=t; i++)
    {
        scanf("%d",&N);
        scanf("%d",&M);
        scanf("%d",&K);
        
        if(M>=N+K)
        printf("Yes\n");
        
        else
        printf("No\n");
    }
	return 0;
}
