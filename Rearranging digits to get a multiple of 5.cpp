#include <iostream>
using namespace std;

int main() 
{
    int t;
	cin>>t;
	while(t--!=0)
	{
	    int num;
	    cin>>num;
	    string s;
	    cin>>s;
	    int count = 0;
	    
	    for(int i=0;i<num;i++)
	    {
	        if(s[i]=='5' || s[i]=='0')
	            count++;
	    }
	    
	    if(count>=1)
	    cout<<"yes"<<endl;
	 
	    else 
	    cout<<"no"<<endl;
	}
}
