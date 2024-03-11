#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t != 0) {
        int x;
        cin >> x;

        while (x >= 4)
            x = x - 4;

        if (x == 0)
            cout << "North" << endl;

        else if (x == 1)
            cout << "East" << endl;

        else if (x == 2)
            cout << "South" << endl;

        else if (x == 3)
            cout << "West" << endl;
        
        t--;
    }
}
