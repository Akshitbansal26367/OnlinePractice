#include <stdio.h>

int main(void) 
{
    int t;
    scanf ("%d",&t);
    
    while (t--!= 0)
    {
        int n;
        scanf ("%d",&n);
        
        if (n % 4 == 0)
        printf ("GOOD\n");
        
        else 
        printf ("Not Good\n");
    }
}
