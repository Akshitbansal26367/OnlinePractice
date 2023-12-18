#include <iostream>
using namespace std;

int main() 
{
    int t,a,b,c,d;
    cin>>t;
    
    while(t--!=0)
    {
        cin>>a>>b>>c>>d;
        /*h=a+b;
        e=b+c;
        f=a+c;
        g=a+b+c;*/
        if(d>=a+b+c)
        cout<<"1"<<endl;
        else if((a+b<=d && c<=d)||(b+c<=d && a<=d)||(a+c<=d && b<=d))
        cout<<"2"<<endl;
        /*else if
        cout<<"2"<<endl;
        else if*/
        else
        cout<<"3"<<endl;
    }
}
//d--> size of bag.
//a,b,c-->size of 3 boxes.
