#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<unsigned int> V(n);

    unsigned long long int sum = 0;
    for (auto &e : V) {
        cin >> e;
        sum += e;
    }

    sort(V.begin(), V.end());

    for (const auto &e : V) {
        if (sum % 2 == 1) {
            cout << sum;
            return 0;
        } else {
            if (e % 2 == 1)
                sum -= e;
        }
    }

    cout << '0';

    return 0;
}