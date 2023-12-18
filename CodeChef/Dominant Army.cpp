#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        int Na,Nb,Nc;
        cin>>Na>>Nb>>Nc;
        
        int d = Na + Nb;
        int e = Nb + Nc;
        int f = Nc + Na;
        
        if (Nc > d)
        cout<<"YES"<<endl;
        
        else if (Nb > f)
        cout <<"YES"<<endl;
        
        else if (Na > e)
        cout<<"YES"<<endl;
        
        else if(Nc < d)
        cout<<"NO"<<endl;
        
        else if (Nb < f)
        cout <<"NO"<<endl;
        
        else
        cout<<"NO"<<endl;
    }
}
