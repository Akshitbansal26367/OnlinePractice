#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- != 0) {
        int n;
        cin >> n;
        int a[n];
        int negativeCount = 0, zeroCount = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++) {
            if (a[i] < 0)
                negativeCount++;

            else if (a[i] == 0)
                zeroCount++;
        }

        if (zeroCount > 0 || negativeCount % 2 == 0)
            cout << 0 << endl;

        else
            cout << 1 << endl;
    }
}
