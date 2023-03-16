#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int q;
    int even = 0;
    int odd = 0;
    long long int sum = 0;
    cin >> n >> q;

    vector<int> v(n);
    for (auto &e : v) {
        cin >> e;
    }

    for (int i = 0; i < n; ++i) {
        if (v[i] & 1) odd++;
        else even++;
        sum += v[i];
    }

    for (int i = 0; i < q; ++i) {
        int x;
        int y;
        cin >> x >> y;
        if (x) {
            sum += odd * y;
            if (y & 1) {
                even += odd;
                odd = 0;
            }
        } else {
            sum += even * y;
            if (y & 1) {
                odd += even;
                even = 0;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
