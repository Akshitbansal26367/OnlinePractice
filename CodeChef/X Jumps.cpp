#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- != 0) {
        int x, y;
        cin >> x >> y;
        int count = 0;

        int quotient = x / y;
        int rem = x % y;

        if (rem == 0)
            cout << quotient << endl;

        else
            cout << quotient + rem << endl;
    }
}
