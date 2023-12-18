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
        if((x==y) && (x>=1 || y>=1))
        cout<<"YES"<<endl;
        
        else 
        cout<<"NO"<<endl;
    }
}
