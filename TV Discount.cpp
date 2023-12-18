#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int e = a - c;
        int f = b - d;
        
        if (e>f)
        cout<<"Second"<<endl;
        
        else if (e==f)
        cout<<"Any"<<endl;
        
        else
        cout<<"Second"<<endl;
    }
}
