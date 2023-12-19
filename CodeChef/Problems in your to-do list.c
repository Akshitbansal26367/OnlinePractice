#include <stdio.h>

int main() 
{
    int t,N,D[N];
    scanf("%d",&t);
    while(t--!=0)
    {
        int count=0;
        scanf("%d",&N);
        for(int i=0; i<N; i++)
        {
            scanf("%d",&D[i]);
            if(D[i]>=1000)
            count=count+1;
        }
        printf("%d\n",count);
    }
}
