#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, e;
    cin >> n >> k >> e;

    auto F = [&](int x) {
        return min(n-k+1, e+k-1) - max(k, x-e);
    };

    int max_coverage = 0;
    for (int x = 1; x <= n-k+1; x++) {
        max_coverage = max(max_coverage, F(x));
    }

    int empty_squares = n - k - max_coverage + 1;
    cout << empty_squares << endl;

    return 0;
}
