#include <iostream>
using namespace std;

int main() 
{
    int t,a,b,c,d;
    cin>>t;
    
    while(t--!=0)
    {
        cin>>a>>b>>c>>d;
        
        if(d<b || c<a)
        cout<<"IMPOSSIBLE"<<endl;
        
        else
        cout<<"POSSIBLE"<<endl;
    }
	return 0;
}
//A-->initial number of goals of team 1.
//B-->initial number of goals of team 2.
//C-->final number of goals of team 1.
//D-->final number of goals of team 2.
