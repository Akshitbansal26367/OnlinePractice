#include <stdio.h>

int main() 
{
    int T,X,Y,A;
    scanf("%d",&T);
    
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&X);
        scanf("%d",&Y);
        scanf("%d",&A);
        
        if(A>=X && A<Y)
        printf("YES\n");
        
        else
        printf("NO\n");
    }
	return 0;
}
