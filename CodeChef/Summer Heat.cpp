#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- != 0) {
        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;

        int coco1 = Xa / xa;
        int coco2 = Xb / xb;

        cout << coco1 + coco2 << endl;
    }
}
