#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        int R;
        scanf("%d",&R);
        
        if(R<1600)
            printf("3\n");
        
        else if (R>=1600 && R<2000)
            printf("2\n");
        
        else
            printf("1\n");
    }
}
