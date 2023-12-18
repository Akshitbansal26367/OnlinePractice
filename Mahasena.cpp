#include <stdio.h>

int main()
{
    int N,a[250];
    int lucky_count=0;
    int unlucky_count=0;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            lucky_count++;
        }
        else
        {
            unlucky_count++;
        }
    }
    if(lucky_count>unlucky_count)
    printf("READY FOR BATTLE\n");
    
    else
    printf("NOT READY\n");
	return 0;
}
