#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int c;
    int n;
    cin >> n >> c;

    vector<int> sums;
    vector<int> V(n);
    for (auto &e : V) {
        cin >> e;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        count++;
        if (V[i] >= c) continue;
        else {
            int sum = count + V[i];
            if (sum <= c) {
                sums.emplace_back(sum);
            }
        }
    }

    sort(sums.begin(), sums.end());

    int teles = 0;
    for (const auto &e : sums) {
        if (e <= c) {
            teles++;
            c -= e;
        }
    }

    cout << teles;

    return 0;
}
