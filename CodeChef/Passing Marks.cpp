#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int i,a[3],b[3],t,sum=0,temp,count=0;
        for(i = 0; i<=2; i++)
        cin>>a[i];
        cin>>t;
        for(i = 0; i<=2; i++)
        {
            cin>>b[i];
            sum = sum + b[i];
        }
        
        temp = sum;
        for(i = 0 ; i<=2; i++)
        {
            if(b[i]>=a[i] && temp>=t)
            count++;
            
            else
            i++;
        }
        
        if(count==3)
        cout<<"YES"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
