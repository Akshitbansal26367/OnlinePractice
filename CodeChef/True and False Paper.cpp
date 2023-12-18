#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int n,k;
        cin>>n>>k;
        cout<<abs(k-n)<<endl;
    }
}
