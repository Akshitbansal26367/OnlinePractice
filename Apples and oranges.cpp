#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
	cin>>t;
	while(t>0)
	{
	    int a,b;
	    cin>>a>>b;
	    cout<<gcd(a,b)<<endl;
	    t--;
	}
}
