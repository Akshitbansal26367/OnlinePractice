#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--!=0)
    {
        int n,m;
        cin >> n >> m;
        
        if (n>m)
        cout << n - m << endl;
        
        else
        cout << "0" << endl;
    }
}
