#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int i,n,x,j,temp;
        cin>>n>>x;
        int a[n];
        for(i = 0; i<n; i++)
        cin>>a[i];
        
        for(i = 0 ; i<n; i++)
        {
            for(j = i+1; j<n ; j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        cout<<(a[n-x]-1)<<endl;
    }
}
