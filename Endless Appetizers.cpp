#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x,y,r;
        cin>>x>>y>>r;
        
        if(r==0)
        {
            if(x%y==0)
            cout<<x/y<<endl;
            
            else
            cout<<(x/y)+1<<endl;
        }
        
        else
        {
            int z = r/30;  
            
            if((x+z)%y==0)
            {
                int a = ((x+z)/y);        
                cout<<a<<endl;
            }
            
            else
            cout<<((x+z)/y)+1<<endl;
        }
    }
}
