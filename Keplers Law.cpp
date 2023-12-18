#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        double t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        
        float a = t1*t1;
        float b = t2*t2;
        float c = r1*r1*r1;
        float d = r2*r2*r2;
        float e = a/c;
        float f = b/d;
        
        if(e==f)
        cout<<"Yes"<<endl;
        
        else
        cout<<"No"<<endl;
    }
}
