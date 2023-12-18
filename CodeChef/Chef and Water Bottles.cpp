#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,x,k;
        cin>>n>>x>>k;
        int max=k/x;
        
        if (max>n)
        cout<<n<<endl;
        
        else
        cout<<max<<endl;
    }
}
