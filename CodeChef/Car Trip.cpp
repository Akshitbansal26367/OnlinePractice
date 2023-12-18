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
        
        if(x<=300)
        cout<<"3000"<<endl;
        
        else
        cout<<3000+(x-300)*10<<endl;
    }
}
