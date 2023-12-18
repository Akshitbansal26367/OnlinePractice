#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a = ((int)log10(n))+1;
    
    if(a==1)
    cout<<"1"<<endl;
    
    else if(a==2)
    cout<<"2"<<endl;
    
    else if(a==3)
    cout<<"3"<<endl;
    
    else
    cout<<"More than 3 digits"<<endl;
}
