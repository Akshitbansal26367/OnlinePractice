#include <stdio.h>
#include<string.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--!=0)
	{
	    char str[1005];
	    int count=0;
	    scanf("%s",str);
	    for(int i=0; str[i]!='\0'; i++)
	    {
	        if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u')
	        count++;
	      
	      else 
	      count=0;
	      
	      if(count>2)
	      break;
	  }
	  
	  if(count>2)
	  printf("Happy\n");
	    
	  else
	  printf("Sad\n");
	}
}
