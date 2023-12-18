#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        char s[3];
        char x,y;
        int i;
        
        for(i = 0 ; i<=2; i++)
        cin>>s[i];
        
        cin>>x>>y;
        
        if(s[0]==x || s[0]==y)
        cout<<s[0]<<endl;
        
        else
        cout<<s[1]<<endl;
    }
}
