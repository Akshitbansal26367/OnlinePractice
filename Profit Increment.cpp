#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--!=0)
    {
        int x , y;
        cin>>x>>y;
        
        int costprice = x - y;
        int newSellingPrice = 1.1 * x;
        
        cout << newSellingPrice - costprice <<endl;
    }
}
