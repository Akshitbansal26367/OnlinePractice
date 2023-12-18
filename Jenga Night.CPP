#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,x;
        cin>>n>>x;
        int b=x%n;
        
        if(n<=x && b==0)
        cout<<"YES"<<endl;
        
        else if(n>x)
        cout<<"NO"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
