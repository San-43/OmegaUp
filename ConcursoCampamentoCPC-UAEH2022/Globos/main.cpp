#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

array<int,100005>  bolsas;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y, p, q, g;
    cin >> n >> p >> q;
    char c;

    for (int i = 1; i <= q; ++i) {
        cin >> c >> x >> y >> g;
        if (c == 'A') {
            bolsas[x] += g;
            bolsas[y] -= g;
        } else {
            bolsas[x] -= g;
            bolsas[y] += g;
        }
    }

    for (int i = 1; i <= n; ++i) {
        bolsas[i] += bolsas[i - 1];
    }

    sort(bolsas.begin() + 1, bolsas.end() + 1);

    int ini = 1;
    int end = n;
    n = 0;
    while (ini <= end) {
        int mitad = (ini + end) >> 1;
        if (bolsas[mitad] < p) {
            ini = mitad + 1;
            n = mitad;
        } else {
            end = mitad - 1;
        }
    }
    cout << n;

    return 0;
}
