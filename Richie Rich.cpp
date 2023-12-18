#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int a,b,x;
        cin>>a>>b>>x;
        
        int assets = b-a;
        int years = assets/x;
        
        cout<<years<<endl;
    }
}
