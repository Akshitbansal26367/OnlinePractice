#include <stdio.h>

int main() 
{
    int T,A,B,C,D,E;
    scanf("%d",&T);
    
    for(int i=1; i<=T; i++)
    {
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        scanf("%d",&D);
        scanf("%d",&E);
        
        if(A+B<=D && C<=E)
        printf("YES\n");
        
        else if(B+C<=D && A<=E)
        printf("YES\n");
        
        else if(A+C<=D && B<=E)
        printf("YES\n");
        
        else
        printf("NO\n");
    }
	return 0;
}
