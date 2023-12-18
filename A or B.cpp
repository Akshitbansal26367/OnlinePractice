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
        int a=x+y;
        int a1=(500)-(2*x);
        int a2=(500)-(2*a);
        int b1=(1000)-(4*y);
        int b2=(1000)-(4*a);
        int m1 = a1+b2;
        int m2 = a2+b1;
        
        cout<<max(m1,m2)<<endl;
    }
}
