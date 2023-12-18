#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,y;
        cin>>x>>y;
        int a = 10 * y;      //  followers becomes 10 times
        
        if (x>a)            // It is a fake account
        cout<<"Yes"<<endl;
        
        else
        cout<<"NO"<<endl;   //It is not a fake account
    }
}
