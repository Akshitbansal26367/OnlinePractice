#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int X;
        cin>>X;
        
        if(X==0)
        cout<<"0"<<endl;
        
        else if(X%3==0)
        cout<<"0"<<endl;
        
        else if (X%3==2)
        cout<<"1"<<endl;
        
        else
        cout<<"2"<<endl;
    }
}
