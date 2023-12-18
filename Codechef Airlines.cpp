#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int x , y , z;
        cin>>x;
        cin>>y;
        cin>>z;
        
        if (y <= 10 *x)
        cout << y * z<<endl;
        
        else
        cout << 10 * x * z <<endl;
    }
}
