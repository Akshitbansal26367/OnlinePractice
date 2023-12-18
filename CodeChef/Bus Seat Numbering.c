#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--!=0)
    {
        int N;
        scanf("%d",&N);
        
        if (N>=1 && N<=10)
            printf("Lower Double\n");
            
        else if (N>=11 && N<=15)
            printf("Lower Single\n");
            
        else if (N>=16 && N<=25)
            printf("Upper Double\n");
            
        else
            printf("Upper Single\n");
    }
}
