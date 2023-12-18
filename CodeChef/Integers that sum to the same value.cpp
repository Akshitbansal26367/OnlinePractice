#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    int i,j,count = 0;
    
    if(N==1)
    cout<<"0"<<endl;
    
    else if (N==2)
    cout<<"1"<<endl;
    
    else
    {
        for(i = 1 ; i<N ; i++) 
        {
            j = N - i;               
            count = count + 1;
        }
        cout<<count<<endl;
    }
}
