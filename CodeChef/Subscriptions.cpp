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
        
        if(n%6==0)
        {
            int a=n/6;
            cout<<a*x<<endl;
        }
        
        else
        {
            int b=(n/6)+1;
            cout<<b*x<<endl;
        }
    }
}
