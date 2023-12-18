#include <iostream>
using namespace std;

int main() 
{
    int t,i,j;
    cin>>t;
    while(t--!=0)
    {
        cin>>i;
        cin>>j;
        int a = i + j;
        if (a%2==0)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
