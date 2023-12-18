#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d=a+b;
        int e=b+c;
        int f=a+c;
        
        if(d%2==1)
        cout<<"YES"<<endl;
        
        else if (e%2==1)
        cout<<"YES"<<endl;
        
        else if (f%2==1)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
