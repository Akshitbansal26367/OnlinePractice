#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int n,b;
        cin>>n>>b;
        int w[n], h[n], p[n];
        int i,max;
        
        for(i = 0; i<n; i++)
        cin>>w[i]>>h[i]>>p[i];
        
        max = 0;
        
        for(i = 0; i<n; i++)
        {
            if(b>=p[i])
            {
                if(w[i]*h[i]>max)
                max = w[i]*h[i];
            }
        }
        
        if(max==0)
        cout<<"no tablet"<<endl;
        
        else
        cout<<max<<endl;
    }
}
