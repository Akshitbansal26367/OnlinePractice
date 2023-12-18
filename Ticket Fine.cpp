#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,p,q;
        cin>>x>>p>>q;
        int a=p-q;
        cout<<a*x<<endl;
    }
}
