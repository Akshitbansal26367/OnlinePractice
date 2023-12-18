#include <stdio.h>

int main() 
{
	int t,X;
	scanf("%d",&t);
	
	for(int i=1; i<=t; i++)
	{
	    scanf("%d",&X);
	   
	    if(X<=15)
	    printf("Yes\n");
	    
	    else
	    printf("No\n");
	}
	return 0;
}
