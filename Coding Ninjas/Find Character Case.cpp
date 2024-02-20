#include<iostream>
using namespace std;

int main() {
	char s;
	cin >> s;

	if (s>='A' && s<='Z')
		cout <<1<< endl;
	
	else if (s>='a' && s<='z')
		cout <<0<<endl;
	
	else
		cout <<-1<<endl;
}
