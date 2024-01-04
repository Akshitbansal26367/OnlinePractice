#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    int element;
    
    //Creating vector
    vector <int> v;
    
    //Putting elements into the vector
    for(int i = 0; i<n; i++) {
        cin >> element;
        v.push_back(element);
    }
    
    //Sorting vector
    sort(v.begin(),v.end());
    
    //Printing the Sorted vector
    for(int i; i<n; i++)
        cout <<v[i] <<" ";
    
    return 0;
}
