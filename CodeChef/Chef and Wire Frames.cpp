#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int a=2*(n+m);
        cout<<a*x<<endl;
    }
}
