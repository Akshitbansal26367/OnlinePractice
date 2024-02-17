#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int flag = 1;
        int d[n];
        
        for (int i = 0; i < n; i++)
            scanf("%d", &d[i]);
        
        for (int i = 0; i<n-1; i++) {
            if(d[i] > d[i+1]){
                flag = 0;
                break;
            }
                
            else
                flag = 1;
        }
        
        if(flag == 1)
            printf("Yes\n");
        
        else
            printf("No\n");
    }
}
