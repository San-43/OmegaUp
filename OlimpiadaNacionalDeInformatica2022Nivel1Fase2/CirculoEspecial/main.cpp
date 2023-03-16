#include <iostream>
#include <cmath>

using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    int x;
    int y;
    int r;
    int count = 0;
    int result;
    cin >> n;
    struct round {
        int x;
        int y;
        int r;
    }list[n];

    for (int i = 0; i < n; ++i) {
        cin >> list[i].x >> list[i].y >> list[i].r;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == i) {
                continue;
            }
            result = pow(list[i].x - list[j].x, 2) + pow(list[i].y - list[j].y, 2);
            if (result > pow(list[i].r + list[j].r, 2)) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
