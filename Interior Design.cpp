#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        
        if(x1+y1<=x2+y2)
        cout<<x1+y1<<endl;
        
        else 
        cout<<x2+y2<<endl;
    }
}
