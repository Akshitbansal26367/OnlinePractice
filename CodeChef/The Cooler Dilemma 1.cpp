#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,y,m;
        cin>>x>>y>>m;
        
        if(x*m<y)
        cout<<"YES"<<endl;
        
        else 
        cout<<"NO"<<endl;
    }
}
