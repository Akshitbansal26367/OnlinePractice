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
        int a=n*x;
        if(a%4==0)
        {
            int b=a/4;
            cout<<b<<endl;
        }
        
        else 
        {
            int d=(a/4)+1;
            cout<<d<<endl;
        }
    }
}
