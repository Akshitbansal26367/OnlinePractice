#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //declaration of two strings
    string a;
    string b;
    
    cin>>a>>b;
    
    //finding length of both the strings
    int c = a.size();
    int d = b.size();
    
    cout << c << " " <<d;
    cout << endl;
    
    //concatenating two strings
    string e = a + b;
    cout << e;   
    cout << endl;
    
    //swapping the first alphabet of string a and first alphabet of string b
    char z = a[0];
    a[0] = b[0];
    b[0] = z;
    
    cout << a <<" " << b;
}
