#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int t=y/x;
        
        if(t<z)
        cout<<z-t<<endl;
        
        else
        cout<<"0"<<endl;
    }
}
