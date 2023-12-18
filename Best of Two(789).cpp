#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int a1,a2,a3,b1,b2,b3,sum1,temp1,temp2,sum2;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        
        if(a1>=a2 && a1>=a3)
        {
            if(a2>a3)
            sum1 = a1+a2;
            
            else
            sum1 = a1+a3;
        }
        
        else if (a2>=a1 && a2>=a3)
        {
            if(a1>a3)
            sum1 = a2+a1;
            
            else
            sum1 = a2+a3;
        }
        
        else
        {
            if(a2>a1)
            sum1 = a3+a2;
            
            else
            sum1 = a3+a1;
        }
        temp1 = sum1;
        
        if(b1>=b2 && b1>=b3)
        {
            if(b2>b3)
            sum2 = b1+b2;
            
            else
            sum2 = b1+b3;
        }
        
        else if (b2>=b1 && b2>=b3)
        {
            if(b1>b3)
            sum2 = b2+b1;
            
            else
            sum2 = b2+b3;
        }
        
        else
        {
            if(b2>b1)
            sum2 = b3+b2;
            
            else
            sum2 = b3+b1;
        }
        temp2 = sum2;
        
        if(temp1>temp2)
        cout<<"Alice"<<endl;
        
        else if(temp2>temp1)
        cout<<"Bob"<<endl;
        
        else
        cout<<"Tie"<<endl;
    }
}
