#include <iostream>
using namespace std;

int main() 
{
    int t,a,b;
    cin>>t;
    while(t--!=0)
    {
        cin>>a>>b;
        
        if(a>b)
        cout<<b<<endl;
        else
        cout<<a<<endl;
    }
}
