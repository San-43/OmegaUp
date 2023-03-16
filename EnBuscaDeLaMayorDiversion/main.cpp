#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int aux;
    cin >> aux;
    int x;
    long sum = aux;
    for (int i = 1; i < n; ++i) {
        cin >> x;
        if (x < aux)
            aux = x;
        sum += x;
    }

    cout << sum - aux;

    return 0;
}
