#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int D,d,A=10,B=21,C=42;
        cin>>D>>d>>A>>B>>C;
        int distance = D*d;
        
        if(distance<10)
        cout<<"0"<<endl;
        
        else if((distance>=10) && (distance<21))
        cout<<A<<endl;
        
        else if((distance>=21) && (distance<42))
        cout<<B<<endl;
        
        else 
        cout<<C<<endl;
    }
}
