#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t-- != 0) {
        int n;
        cin >> n;
        int s[n], d[n];
        int count = 0;

        for (int i = 0; i < n; i++)
            cin >> s[i];

        for (int i = 0; i < n; i++)
            cin >> d[i];

        for (int i = 0; i<n; i++) {
            if (s[i] == d[i])
                count++;
        }

        cout << count << endl;
    }
}
