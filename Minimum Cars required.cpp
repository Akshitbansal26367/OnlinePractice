#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n;
        cin>>n;
        int a=(n/4)+1;
        
        if(n%4==0)
        cout<<n/4<<endl;
        
        else
        cout<<a<<endl;
    }
}
