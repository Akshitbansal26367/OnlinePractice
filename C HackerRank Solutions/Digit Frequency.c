#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[1000];
    scanf("%s",s);
    int length = strlen(s);
    
    int count0 = 0,count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0,count7 = 0, count8 = 0, count9 = 0;
        
    for(int i = 0; i<length; i++)
    {
        if(s[i]=='0')
        count0++;
        
        else if(s[i]=='1')
        count1++;  
        
        else if(s[i]=='2')
        count2++;
            
        else if(s[i]=='3')
        count3++;
        
        else if(s[i]=='4')
        count4++;
        
        else if(s[i]=='5')
        count5++;
        
        else if(s[i]=='6')
        count6++;
        
        else if(s[i]=='7')
        count7++;
        
        else if(s[i]=='8')
        count8++;
        
        else if(s[i]=='9')
        count9++;
    }
    
    printf("%d ",count0);
    printf("%d ",count1);
    printf("%d ",count2);
    printf("%d ",count3);
    printf("%d ",count4);
    printf("%d ",count5);
    printf("%d ",count6);
    printf("%d ",count7);
    printf("%d ",count8);
    printf("%d ",count9);
}
