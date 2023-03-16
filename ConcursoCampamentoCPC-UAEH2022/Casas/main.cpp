#include <bits/stdc++.h>

using namespace std;
#define endl '\n'

long long int costo[100005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int q;
    int b;
    for (int i = 1; i <= n; ++i) {
        cin >> q >> b;
        for (int j = 1; j <= q; ++j) {
            cin >> costo[j];
        }

        sort(costo, costo + q+1);
        for (int j = 1; j <= q; ++j) {
            costo[j] += costo[j - 1];
        }

        int ini = 1;
        int end = q;
        int mitad;
        bool encontro = false;
        int count = 0;
        while (ini <= end) {
            mitad = (ini + end) / 2;
            if (costo[mitad] <= b) {
                ini = mitad + 1;
                count = mitad;
            } else
                end = mitad - 1;
        }
        if (!encontro) {
            cout << "Caso #" << i << ": " << count << endl;
        }
    }

    return 0;
}
