#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);
    
    while (t--!=0)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int a = x*100;
        int b = y*10;
        
        if (a>b)
        printf("Cloth\n");
        
        else if (a>=b)
        printf("Cloth\n");
        
        else
        printf("Disposable\n");
    }
}
