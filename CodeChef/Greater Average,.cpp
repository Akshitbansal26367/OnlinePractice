#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        float a,b,c;
        cin>>a>>b>>c;
        float d=(0.5)*(a+b);
        
        if(d>c)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
