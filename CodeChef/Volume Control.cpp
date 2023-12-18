#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int t,X,Y;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        scanf("%d %d",&X,&Y);
        int c=abs(X-Y);
        printf("%d\n",c);
    }
}
