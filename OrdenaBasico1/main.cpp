#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> V(n);
    for (auto &e : V)
        cin >> e;
    sort(V.begin(), V.end(), [](int a, int b) { return a > b; });
    for (auto &e: V)
        cout << e << '\n';
    return 0;
}
