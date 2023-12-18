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
        int a=y-x;
        
        if (a==0)
        cout<<"0"<<endl;
        
        else if (a<=8)
        cout<<"1"<<endl;
        
        else if (a>8 && a%8==0)
        cout<<a/8<<endl;
        
        else
        cout<<(a/8)+1<<endl;
    }
}
