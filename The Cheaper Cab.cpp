#include <stdio.h>

int main()
{
	// your code goes here
	int X,Y,T;
	scanf("%d",&T);
	while(T--!=0)
    {
        scanf("%d %d",&X,&Y);
        if(X<Y)
        printf("FIRST");
        else if(X==Y)
        printf("ANY");
        else
        printf("SECOND");
        printf("\n");
    }	
	return 0;
}
