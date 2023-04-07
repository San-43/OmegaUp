#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    int m;
    cin >> n >> m;

    char c;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
           cin >> c;
            if (c == 'C')
                ++count;
        }
    }
    cout << count;
    return 0;
}