#include <iostream>

using namespace std;

int piedras[100005];

int getSum(int a, int b) {
    if (a == 0)
        return piedras[b];
    else
        return piedras[b] - piedras[a-1];
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> piedras[i];
        if (i > 0)
            piedras[i] += piedras[i - 1];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int v;
        int x;
        cin >> v >> x;
        int min = x;
        int max = n - 1;
        int aux = 0;
        while (min <= max) {
            int mitad = (max + min) / 2;
            int sum = getSum(x, mitad);
            if (sum == v) {
                aux = mitad;
                break;
            } else if (sum < v) {
                min = mitad + 1;
            } else {
                aux = mitad;
                max = mitad - 1;
            }
        }
        if (piedras[aux] < v) {
            cout << n << '\n';
        } else {
            cout << aux << '\n';
        }
    }
    return 0;
}