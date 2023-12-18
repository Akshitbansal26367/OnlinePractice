#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,x,k;
        cin>>n>>x>>k;
        if(k>=x*n)
        cout<<"YES"<<endl;
        
        else 
        cout<<"NO"<<endl;
    }
}
