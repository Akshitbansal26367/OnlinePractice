#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t!=0)
    {
        int a,b;
        cin>>a>>b;
        
        if(a%3==0 || b%3==0)
        cout<<"0"<<endl;
        
        else if((a%3==1 && b%3==1) || (a%3==2 && b%3==2))
        cout<<"1"<<endl;
        
        else
        cout<<"2"<<endl;
        t--;
    }
}
