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
        int a=x*y;
        
        if(a%100>=0)
        cout<<a/100<<endl;
        
        else
        cout<<"0"<<endl;
    }
}
