#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--!=0)
    {
        int P,M,V;
        scanf("%d%d%d",&P,&M,&V);
        
        int distance = (M-P+1)*(V);
        printf("%d\n",distance);
    }
}
