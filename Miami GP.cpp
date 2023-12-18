#include <iostream>
using namespace std;

int main() 
{
    int t;
    float x,y;
    cin>>t;
    while(t--!=0)
    {
        cin>>x>>y;
        float r=x*1.07;
        if(r>=y)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
