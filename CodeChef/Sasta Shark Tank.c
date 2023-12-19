#include <stdio.h>

int main(void) 
{
    int t;
    scanf ("%d",&t);
    
    while (t--!=0)
    {
        int A , B;
        scanf ("%d %d",&A,&B);
        
        int C = (10) * (A);
        int D = (5) * (B);
        
        if (C>D)
        printf("FIRST\n");
        
        else if (C<D)
        printf("SECOND\n");
        
        else 
        printf ("ANY\n");
    }
}
