#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        
        if (x!=a && y!=b && x!=b && y!=a)
        cout<<"2"<<endl;
        
        else if (x!=a && y==b)
        cout<<"1"<<endl;
        
        else if (x==a && y!=b)
        cout<<"1"<<endl;
        
        else if (x==b && y!=a)
        cout<<"1"<<endl;
        
        else if (x!=b && y==a)
        cout<<"1"<<endl;
        
        else 
        cout<<"0"<<endl;
    }
}
