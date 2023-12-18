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
        int a=5*x+y*10;
        if(a>z)
        cout<<a/z<<endl;
        
        else
        cout<<"0"<<endl;
    }
}
