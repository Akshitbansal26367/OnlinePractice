#include <iostream>
using namespace std;

int factorial (int num)
{
	if(num==1)
		return num;
	
	else
		return (num*factorial(num-1));
}

int main() 
{
	int num;
	cin >> num;
	int answer = factorial(num);
	cout<<answer<<endl;
}
