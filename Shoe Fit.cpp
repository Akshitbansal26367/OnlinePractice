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
        
        
        if(a+b==1)
        cout<<"1"<<endl;
        
        else if(b+c==1)
        cout<<"1"<<endl;
        
        else if(c+a==1)
        cout<<"1"<<endl;
        
        else
        cout<<"0"<<endl;
    }
}
