#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        float x,y;
        cin>>x>>y;
        
        if(y/x>=0.5)
        cout<<"YES"<<endl;
        
        else 
        cout<<"NO"<<endl;
    }
}
