#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        float a,b,c;
        cin>>a>>b>>c;
        float d=(0.5)*(a+b);
        float e=(0.5)*(b+c);
        float f=(0.5)*(a+c);
        
        if(d<35 || e<35 || f<35)
        cout<<"Fail"<<endl;
        
        else
        cout<<"Pass"<<endl;
    }
}
