#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int x , y , z;
        cin>>x>>y>>z;
        
        int totalTruckWeight = x + y;
        int a = z - y;
        
        if (totalTruckWeight>z)
        cout<<"0"<<endl;
        
        else
        cout<<a/x<<endl;
    }
}
