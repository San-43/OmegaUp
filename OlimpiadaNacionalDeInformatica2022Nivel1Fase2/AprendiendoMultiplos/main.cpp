#include <iostream>

using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int n;
    int count = 0;

    for (int i = 0; i < 5; ++i) {
        cin >> n;
        if (n % 5 == 0) {
            count++;
        }
    }

    cout << count;
    return 0;
}
