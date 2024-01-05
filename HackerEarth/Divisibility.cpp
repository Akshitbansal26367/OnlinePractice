#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int arr[n];
	int temp[n];

	for(int i = 0; i<n; i++)
		cin>>arr[i];

	for(int i = 0; i<n; i++)
	{
		while(arr[i]>9)
			arr[i] = arr[i]%10;

		temp[i] = arr[i];
	}

	if(temp[n-1]==0)
	cout <<"Yes"<<endl;

	else
	cout << "No" << endl;
}
