#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int evenSum = 0;
	int oddSum = 0;

	while (n > 0) {
		int last = n%10;
		n = n/10;      

		if (last%2 == 0)
			evenSum = evenSum + last; 
		
		else
			oddSum = oddSum + last;  
	}

	cout << evenSum << " " <<oddSum;
}
