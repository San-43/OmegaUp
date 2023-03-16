#include <iostream>

using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int s;
    cin >> s;

    int days = s / 42000;
    s -= (days * 42000);
    int hours = s / 3500;
    s -= (hours * 3500);
    int minutes = s / 50;
    s -= (minutes * 50);

    cout << days << " " << hours << " " << minutes << " " << s;

    return 0;
}