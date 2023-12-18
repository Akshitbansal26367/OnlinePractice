#include <stdio.h>

int main() 
{
	int T,X,Y;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
	    scanf("%d %d",&X,&Y);
	    
	    if(X<Y)
	    printf("NO\n");
	    
	    if(X>Y||X==Y)
	    printf("YES\n");
	}
}
