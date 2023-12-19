#include <stdio.h>

int main() 
{
    int t,i;
    scanf("%d",&t);
    while(t--!=0)
    {
        int l,r,count=0;
        scanf("%d%d",&l,&r);
        
        for (i = l; i<=r; i++)
        {
            int last = i%10;
            
            if(last==2 || last==3 || last ==9)
                count++;
        }
        printf("%d\n",count);
    }
}
