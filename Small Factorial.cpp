#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,product=1;
        cin>>n;
        
        for(int i=1; i<=n; i++)
        {
            product=product*i;
        }
        cout<<product<<endl;
    }
}
