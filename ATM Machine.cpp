#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,i;
	    scanf("%d%d",&n,&k);
	    int arr[n];
	    
	    for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<=k)
	        {
	            k=k-arr[i];
	            printf("1");
	        }
	        else
	        printf("0");
	    }
	    printf("\n");
	}
}
