#include <stdio.h>

int main() 
{
    int T,X;
    scanf("%d",&T);
    
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&X);
        int Z=5*2*X;
        printf("%d\n",Z);
    }
	return 0;
}
