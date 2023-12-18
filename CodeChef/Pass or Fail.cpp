#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,x,p;
        cin>>n>>x>>p;
        int incorrect=n-x;
        int final_score = (3*x) - (1*incorrect);
        
        if(final_score>=p)
        cout<<"PASS"<<endl;
        
        else
        cout<<"FAIL"<<endl;
    }
}
