#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int m;
    cin >> m;
    int sheets[m];

    for (int i = 0; i < m; ++i) {
        cin >> sheets[i];
    }

    int key;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int min = 0;
        int max = m - 1;
        bool isFound = false;

        cin >> key;
        while (min <= max) {
            int guess = min + (max - min) / 2;
            if (sheets[guess] == key) {
                cout << guess + 1 << endl;
                isFound = true;
                break;
            } else if (sheets[guess] < key) {
                min = guess + 1;
            } else {
                max = guess - 1;
            }
        }
        if (!isFound) {
            cout << 0 << endl;
        }
    }
    return 0;
}
