#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int chairs[100002];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> chairs[i];
    }
    sort(chairs, chairs + n);

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int p;
        cin >> p;

        int min = 0;
        int max = n - 1;
        int index = 0;
        while (min <= max) {
            int guess = (min + max) / 2;
            if (chairs[guess] <= p) {
                index = guess;
                min = guess + 1;
            } else {
                max = guess - 1;
            }
        }
        if (abs(chairs[index] - p) > abs(chairs[index + 1] - p)) {
            cout << abs(chairs[index + 1] - p) << endl;
        } else {
            cout << abs(chairs[index] - p) << endl;
        }
    }
    return 0;
}
