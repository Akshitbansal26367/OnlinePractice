#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,a,b;
        cin>>x>>a>>b;
        int f=a+2*b;
        
        if(f>=x)
        cout<<"Qualify"<<endl;
        
        else
        cout<<"NotQualify"<<endl;
    }
}
