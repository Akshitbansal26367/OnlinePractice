#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int i,x,y,z;
        cin>>x>>y>>z;
        
        if((x*y)%z==0)
        cout<<(x*y)<<" "<<z<<endl;
        
        else if((x*z)%y==0)
        cout<<(x*z)<<" "<<y<<endl;
        
        else if((y*z)%x==0)
        cout<<(y*z)<<" "<<x<<endl;
        
        else
        cout<<"-1"<<endl;
    }
}
