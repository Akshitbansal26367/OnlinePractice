#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--!=0)
    {
        int n;
        scanf("%d",&n);
        int count=0;
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>=10 && arr[i]<=60)
            count=count+1;
        }
        printf("%d\n",count);
    }
}
