#include <stdio.h>

int main() {
    
    int t;
    scanf("%d",&t);
    
    while (t--!=0) {
        
        int n;
        scanf("%d",&n);
        float sum = 0;
        int count = 0;
        int arr[n];
        int i;
        
        for(i = 0; i<n; i++)
            scanf("%d",&arr[i]);
        
        for (i = 0; i<n; i++) {
            
            sum = sum + arr[i];
            float c = (sum*100)/(i+1);
            
            if(c == 100)
                count++;
        }
        
        printf("%d\n",count);
    }
}
