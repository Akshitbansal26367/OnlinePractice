#include <stdio.h>
#include<string.h>

int main() 
{
    int T;
	scanf("%d",&T);
	for(int i=1; i<=T; i++)
	{
	    int length,i,a=0;
	    char word[800];
	    scanf("%d",&length);
	    scanf("%s",&word) ;
	    
	    for(i=0; i<length; i++)
	    {
	        if(word[i]=='a'|| word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='e')
	        {
	            a=0;
	        }
	        
	        else
	        {
	            a++;
	        }
	        
	        if(a>=4)
	        {
	            break;
	        }
	    }
	    if(a>=4)
	    {
	        printf("NO\n");
	    }
	    else
	    printf("YES\n");
	}
	return 0;
}
