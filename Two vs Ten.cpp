#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int x;
        cin>>x;
        int last = x%10;
        
        if(last==0)
        printf("0\n");
        
        else if(last==5)
        printf("1\n");
        
        else
        printf("-1\n");
    }
}
