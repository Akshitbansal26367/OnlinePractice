#include <stdio.h>
#include <math.h>

int main()
{
    //declaration of the five digit number
    int n;
    scanf("%d",&n);
    int length = (int)(log10(n) +1);
    
    //finding sum of 5-digit number
    if(length==5)
    {
        int sum = 0;
        while(n>0)
        {
            int last = n%10;
            sum = sum+last;
            n = n/10;
        }
        printf("%d",sum);
    }
}
