#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while(t--!=0)
    {
        int g1,s1,b1,g2,s2,b2;
        scanf("%d%d%d%d%d%d",&g1,&s1,&b1,&g2,&s2,&b2);
        int c1 = g1+s1+b1;
        int c2 = g2+s2+b2;
        
        if(c1>c2)
            printf("1\n");
        
        else
            printf("2\n");
    }
}
