#include <iostream>
using namespace std;

class Eager
{
    public:
    int k,x;
    
    void setData()
    {
        cin>>k>>x;
    }
    
    int answer()
    {
        return (7*k-x);
    }
};

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        Eager e;
        e.setData();
        int result = e.answer();
        cout<<result<<endl;
    }
}
