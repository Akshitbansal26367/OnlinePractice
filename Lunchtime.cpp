#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int x;
        cin>>x;
        if(x>=1 && x<=4)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
