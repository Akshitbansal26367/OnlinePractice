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
        if(y>=x && y<=x+200)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
