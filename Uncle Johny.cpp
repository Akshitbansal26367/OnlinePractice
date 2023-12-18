#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int n;
        cin>>n;
        
        int a[n];
        int i,j,temp,k;
        
        for(i = 0; i<n; i++)
        cin>>a[i];
        
        cin>>k;
    
        int index = a[k-1];      
        
        for(i = 0; i<n; i++)
        {
            for(j = i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        
        for(i = 0; i<n; i++)
        {
            if(a[i]==index)               
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
