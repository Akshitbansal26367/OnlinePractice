#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        
        if(x+y==w || y+z==w || x+z==w || x+y+z==w || x==w || y==w || z==w)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
