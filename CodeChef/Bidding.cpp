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
        
        if (a > b && a >c)
        cout<<"Alice"<<endl;
        
        else if (b>a && b>c)
        cout<<"Bob"<<endl;
        
        else
        cout<<"Charlie"<<endl;
    }
}
