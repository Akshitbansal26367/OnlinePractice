 #include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--!=0)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int sum = a+b;
        int count = 0;
        
        for (int i = 1 ; i<=sum ; i++)
        {
            if (sum%i ==0)
                count++;
        }
        
        if(count==2)
            printf("Alice\n");
            
        else
            printf("Bob\n");
    }
}
