#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,y;
        cin>>x>>y;
        int a=3*x;
        int b=2*y;
        
        if(a>b)
        cout<<b<<endl;
        
        else
        cout<<a<<endl;
    }
}
