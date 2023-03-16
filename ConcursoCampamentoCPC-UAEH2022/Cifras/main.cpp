#include <bits/stdc++.h>

using namespace std;

struct number {
    int num;
    int cifras;
};

bool operator <(const number &i, const number &j) {
    if (i.cifras != j.cifras) {
        if (i.cifras < j.cifras) return true;
        return false;
    }
    if (i.num > j.num) return true;
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    number numbers[n + 5];

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i].num;
        numbers[i].cifras = 1;
    }

    for (int i = 0; i < n; ++i) {
        int num1 = numbers[i].num;
        while (num1 / 10 > 0) {
            num1 /= 10;
            numbers[i].cifras++;
        }
    }
    sort(numbers, numbers + n);

    for(int i = 0; i < n; i++) {
        cout << numbers[i].num << " ";
    }

    cout << endl;
    return 0;
}
