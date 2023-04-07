#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    unsigned int n;
    cin >> n;

    int higher = n % 10;
    int lower = n % 10;
    n /= 10;

    while (n > 0) {
        if (higher < n % 10)
            higher = n % 10;
        if (lower > n % 10)
            lower = n % 10;
        n /= 10;
    }

    cout << (higher * lower);
    return 0;
}
