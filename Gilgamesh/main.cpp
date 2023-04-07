#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Mountain {
    int h{};
    string name;
};

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    vector<Mountain> mountains(n);
    for (auto &mountain : mountains) {
        cin >> mountain.h >> mountain.name;
    }

    sort(mountains.begin(), mountains.end(), [](const Mountain &a, const Mountain &b) {
        return a.h > b.h;
    });

    for (auto const &mountain : mountains) {
        cout << mountain.name << '\n';
    }
    cout << '\n';
    return 0;
}
