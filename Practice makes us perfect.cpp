#include <iostream>
using namespace std;

int main() 
{
    int problems[4],count=0;
    for(int i=0; i<4; i++)
    {
        cin>>problems[i];
        if(problems[i]>=10)
        count++;
    }
    cout<<count;
}
