#include <stdio.h>

int main(void) 
{
    int t;
    scanf ("%d",&t);
    
    while (t--!=0)
    {
        int n;
        scanf("%d", &n);
        
        int minutes = n * 60;
        
        printf("%d\n",minutes/20);
    }
}
