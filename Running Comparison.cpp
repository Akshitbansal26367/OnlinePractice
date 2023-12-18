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
        int b[n] ,i,count1=0;
        
        for(i = 0; i<n; i++)
        cin>>a[i];
        
        for(i = 0; i<n; i++)
        cin>>b[i];
        
        for(i = 0; i<n; i++)
        {
            if(a[i]<=2*b[i] && b[i]<=2*a[i])   
            count1++;                         
        }
        
        cout<<count1<<endl;
    }
}
