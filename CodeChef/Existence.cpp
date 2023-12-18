#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        long long int x,y;
        cin>>x>>y;
        
        int a = (x*x*x*x) + (4*y*y);
        int b = (4*x*x*y);
        
        if(a==b)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
